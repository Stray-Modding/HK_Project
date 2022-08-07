#include "FurSplineAbcImporterFactory.h"
#include "GFurEditor.h"
#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "EditorReimportHandler.h"
#include "Misc/FileHelper.h"
#include "Misc/Paths.h"
#include "Modules/ModuleManager.h"
#include "Misc/PackageName.h"
#include "Editor.h"
#include "AssetRegistryModule.h"
#include "PackageTools.h"
#include "FurSplines.h"
#include "Widgets/Input/SComboBox.h"
#include "Editor/MainFrame/Public/Interfaces/IMainFrameModule.h"
#include "Widgets/Input/SNumericEntryBox.h"

#if PLATFORM_WINDOWS
#include "Windows/AllowWindowsPlatformTypes.h"
#endif

PRAGMA_DEFAULT_VISIBILITY_START
THIRD_PARTY_INCLUDES_START
#include "Materials/MaterialInstance.h"
#include <Alembic/AbcGeom/All.h>
#include <Alembic/AbcCoreFactory/IFactory.h>
#include <Alembic/Abc/IArchive.h>
#include <Alembic/Abc/IObject.h>
THIRD_PARTY_INCLUDES_END
PRAGMA_DEFAULT_VISIBILITY_END

#if PLATFORM_WINDOWS
#include "Windows/HideWindowsPlatformTypes.h"
#endif

#define LOCTEXT_NAMESPACE "GFurEditor"

static void ParseObject(const Alembic::Abc::IObject& InObject, UFurSplines* Splines, const FMatrix& ParentMatrix, const FMatrix& ConversionMatrix, float Scale, bool bCheckGroomAttributes)
{
	TRACE_CPUPROFILER_EVENT_SCOPE(ParseObject);


	const Alembic::Abc::MetaData ObjectMetaData = InObject.getMetaData();
	const uint32 NumChildren = InObject.getNumChildren();

	FMatrix LocalMatrix = ParentMatrix;

	if (Alembic::AbcGeom::ICurves::matches(ObjectMetaData))
	{
		TRACE_CPUPROFILER_EVENT_SCOPE(ParseICurves);

		Alembic::AbcGeom::ICurves Curves = Alembic::AbcGeom::ICurves(InObject, Alembic::Abc::kWrapExisting);
		Alembic::AbcGeom::ICurves::schema_type::Sample Sample = Curves.getSchema().getValue();

		Alembic::Abc::P3fArraySamplePtr Positions = Sample.getPositions();
		Alembic::Abc::Int32ArraySamplePtr NumVertices = Sample.getCurvesNumVertices();

		uint32 NumPoints = Positions ? Positions->size() : 0;
		uint32 NumCurves = NumVertices ? NumVertices->size() : 0; 



		FMatrix ConvertedMatrix = ParentMatrix * ConversionMatrix;
		uint32 GlobalIndex = 0;
		uint32 TotalVertices = 0;
		for (uint32 CurveIndex = 0; CurveIndex < NumCurves; ++CurveIndex)
		{
			const uint32 CurveNumVertices = (*NumVertices)[CurveIndex];


			TotalVertices += CurveNumVertices;
			if (TotalVertices > NumPoints)
			{
				break;
			}

			Splines->Index.Add(Splines->Vertices.Num());
			Splines->Count.Add(CurveNumVertices);
			for (uint32 PointIndex = 0; PointIndex < CurveNumVertices; ++PointIndex, ++GlobalIndex)
			{
				Alembic::Abc::P3fArraySample::value_type Position = (*Positions)[GlobalIndex];

				FVector ConvertedPosition = ConvertedMatrix.TransformPosition(FVector(Position.x, Position.y, Position.z));
				Splines->Vertices.Add(ConvertedPosition);
			}
		}
		
	}

	if (NumChildren > 0)
	{
		for (uint32 ChildIndex = 0; ChildIndex < NumChildren; ++ChildIndex)
		{
			ParseObject(InObject.getChild(ChildIndex), Splines, LocalMatrix, ConversionMatrix, Scale, bCheckGroomAttributes);
		}
	}
}

static bool HasObjectCurves(const Alembic::Abc::IObject& InObject)
{
	TRACE_CPUPROFILER_EVENT_SCOPE(CheckObject);

	// Get MetaData info from current Alembic Object
	const Alembic::Abc::MetaData ObjectMetaData = InObject.getMetaData();
	const uint32 NumChildren = InObject.getNumChildren();

	if (Alembic::AbcGeom::ICurves::matches(ObjectMetaData))
	{
		TRACE_CPUPROFILER_EVENT_SCOPE(ParseICurves);

		Alembic::AbcGeom::ICurves Curves = Alembic::AbcGeom::ICurves(InObject, Alembic::Abc::kWrapExisting);
		Alembic::AbcGeom::ICurves::schema_type::Sample Sample = Curves.getSchema().getValue();

		Alembic::Abc::P3fArraySamplePtr Positions = Sample.getPositions();
		Alembic::Abc::Int32ArraySamplePtr NumVertices = Sample.getCurvesNumVertices();

		uint32 NumPoints = Positions ? Positions->size() : 0;
		uint32 NumCurves = NumVertices ? NumVertices->size() : 0; // equivalent to Sample.getNumCurves()

		if (NumPoints > 0 && NumCurves > 0)
			return true;
	}

	if (NumChildren > 0)
	{
		for (uint32 ChildIndex = 0; ChildIndex < NumChildren; ++ChildIndex)
		{
			if (HasObjectCurves(InObject.getChild(ChildIndex)))
				return true;
		}
	}
	return false;
}

static bool ImportFurSplinesFromAlembic(const FString& Filename, UFurSplines* FurSplines, int InConversion)
{

	Alembic::AbcCoreFactory::IFactory Factory;
	Alembic::AbcCoreFactory::IFactory::CoreType CompressionType = Alembic::AbcCoreFactory::IFactory::kUnknown;


	Alembic::Abc::IArchive Archive;


	Alembic::Abc::IObject TopObject;

	Factory.setPolicy(Alembic::Abc::ErrorHandler::kThrowPolicy);
	Factory.setOgawaNumStreams(12);


	Archive = Factory.getArchive(TCHAR_TO_UTF8(*Filename), CompressionType);
	if (!Archive.valid())
		return NULL;


	TopObject = Alembic::Abc::IObject(Archive, Alembic::Abc::kTop);
	if (!TopObject.valid())
		return NULL;


	FMatrix ConversionMatrix;
	switch (InConversion)
	{
	case 0:
	default:
		ConversionMatrix = FMatrix::Identity;
		break;
	case 1:
		ConversionMatrix = FMatrix(FPlane(1, 0, 0, 0), FPlane(0, 0, 1, 0), FPlane(0, 1, 0, 0), FPlane(0, 0, 0, 1));
		break;
	}
	FMatrix ParentMatrix = FMatrix::Identity;
	ParseObject(TopObject, FurSplines, ParentMatrix, ConversionMatrix, 1.0f, true);
	FurSplines->ImportFilename = Filename;
	FurSplines->ImportTransformation = InConversion;
	FurSplines->Version = 1;


	return FurSplines->Vertices.Num() > 0;
}



UFurSplineAbcImporterFactory::UFurSplineAbcImporterFactory(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	bCreateNew = false;
	//bEditAfterNew = true;
	SupportedClass = UFurSplines::StaticClass();

	bEditorImport = true;
	bText = false;
	//	AutoPriority = 0x7fffffff;
	//	ImportPriority = 0x7fffffff;

	Formats.Add(TEXT("abc;Alembic gFur splines"));
}

FText UFurSplineAbcImporterFactory::GetToolTip() const
{
	return FText::FromString("Splines for gFur");
}

bool UFurSplineAbcImporterFactory::FactoryCanImport(const FString& Filename)
{
	/** Factory used to generate objects*/
	Alembic::AbcCoreFactory::IFactory Factory;
	Alembic::AbcCoreFactory::IFactory::CoreType CompressionType = Alembic::AbcCoreFactory::IFactory::kUnknown;

	Alembic::Abc::IArchive Archive;

	Alembic::Abc::IObject TopObject;

	Factory.setPolicy(Alembic::Abc::ErrorHandler::kThrowPolicy);
	Factory.setOgawaNumStreams(12);


	Archive = Factory.getArchive(TCHAR_TO_UTF8(*Filename), CompressionType);
	if (!Archive.valid())
		return false;


	TopObject = Alembic::Abc::IObject(Archive, Alembic::Abc::kTop);
	if (!TopObject.valid())
		return false;


	return HasObjectCurves(TopObject);
}

UObject* UFurSplineAbcImporterFactory::FactoryCreateFile(UClass* InClass, UObject* InParent, FName InName, EObjectFlags Flags, const FString& Filename, const TCHAR* Parms, FFeedbackContext* Warn, bool& bOutOperationCanceled)
{

	int ConversionType = 0;
	float Threshold = .1f;
	
	UFurSplines* Result = NewObject<UFurSplines>(InParent, InName, Flags);
	if (ImportFurSplinesFromAlembic(Filename, Result, ConversionType))
	{
		Result->Threshold = Threshold;
		return Result;
	}
	return NULL;
}

bool UFurSplineAbcImporterFactory::CanReimport(UObject* Obj, TArray<FString>& OutFilenames)
{
	if (UFurSplines* Splines = Cast<UFurSplines>(Obj))
	{
		if (!Splines->ImportFilename.IsEmpty())
		{
			OutFilenames.Add(Splines->ImportFilename);
			return true;
		}
	}
	return false;
}

void UFurSplineAbcImporterFactory::SetReimportPaths(UObject* Obj, const TArray<FString>& NewReimportPaths)
{
	if (UFurSplines* Splines = Cast<UFurSplines>(Obj))
	{
		if (ensure(NewReimportPaths.Num() == 1))
		{
			Splines->ImportFilename = NewReimportPaths[0];
		}
	}
}

EReimportResult::Type UFurSplineAbcImporterFactory::Reimport(UObject* Obj)
{
	if (UFurSplines* Splines = Cast<UFurSplines>(Obj))
	{
		Splines->Modify();
		Splines->Vertices.Reset();
		Splines->Index.Reset();
		Splines->Count.Reset();
		Splines->Version = 1;
		EReimportResult::Type r = ImportFurSplinesFromAlembic(Splines->ImportFilename, Splines, Splines->ImportTransformation) ? EReimportResult::Succeeded : EReimportResult::Failed;
		return r;

	}
	return EReimportResult::Failed;
}

int32 UFurSplineAbcImporterFactory::GetPriority() const
{
	return ImportPriority;
}