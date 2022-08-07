

#include "GFurEditor.h"

#include "Editor/PropertyEditor/Public/PropertyEditorModule.h"
#include <Runtime/Projects/Private/PluginManager.h>

#include "AssetToolsModule.h"
#include "IAssetTools.h"

#define LOCTEXT_NAMESPACE "GFurEditor"

void FGFurEditorModule::StartupModule()
{

	//Custom detail views
	IAssetTools& AssetTools = FModuleManager::LoadModuleChecked<FAssetToolsModule>("AssetTools").Get();
	EAssetTypeCategories::Type CreaturePackAssetCategoryBit = AssetTools.RegisterAdvancedAssetCategory(FName(TEXT("FurSplinesAssetCategory")), LOCTEXT("FurSplinesAssetCategory", "Spline Guides"));

}

void FGFurEditorModule::ShutdownModule()
{
	
}

IMPLEMENT_MODULE(FDefaultGameModuleImpl, GFurEditorModule);
