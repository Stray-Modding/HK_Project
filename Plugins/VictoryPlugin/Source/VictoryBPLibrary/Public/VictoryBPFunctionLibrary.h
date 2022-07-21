#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EJoyImageFormats.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "VictoryInput.h"
#include "VictoryInputAxis.h"
#include "UObject/NoExportTypes.h"
#include "InputCoreTypes.h"
#include "Engine/EngineBaseTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "Navigation/PathFollowingComponent.h"
#include "Input/Events.h"
#include "UObject/NoExportTypes.h"
#include "LevelStreamInstanceInfo.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "EJoyGraphicsFullScreen.h"
#include "VictoryBPFunctionLibrary.generated.h"

class USoundWave;
class AActor;
class UObject;
class UWidget;
class UUserWidget;
class UAudioComponent;
class APlayerController;
class AStaticMeshActor;
class UTexture2D;
class USoundClass;
class ACharacter;
class USoundAttenuation;
class ULevelStreamingDynamic;
class UPrimitiveComponent;
class ULevelStreaming;
class AVictoryISM;
class USceneCaptureComponent2D;
class UDestructibleComponent;
class URamaVictoryPluginCreateProcessPipe;
class APawn;
class UNavigationQueryFilter;
class USkeletalMeshComponent;
class UActorComponent;
class APostProcessVolume;
class UTextureRenderTarget2D;
class USceneComponent;
class UPanelSlot;
class UStaticMeshComponent;
class APlayerStart;
class UMaterialInterface;
class UMeshComponent;
class ASceneCapture2D;

UCLASS(BlueprintType)
class VICTORYBPLIBRARY_API UVictoryBPFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UVictoryBPFunctionLibrary();
    UFUNCTION(BlueprintPure)
    static bool WorldType__InPIEWorld(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static bool WorldType__InGameInstanceWorld(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static bool WorldType__InEditorWorld(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static bool WidgetIsChildOf(UWidget* ChildWidget, UWidget* PossibleParent);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static UUserWidget* WidgetGetParentOfClass(UWidget* ChildWidget, TSubclassOf<UUserWidget> WidgetClass);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void WidgetGetChildrenOfClass(UWidget* ParentWidget, TArray<UUserWidget*>& ChildWidgets, TSubclassOf<UUserWidget> WidgetClass, bool bImmediateOnly);
    
    UFUNCTION(BlueprintCallable)
    static void Visibility__GetRenderedActors(UObject* WorldContextObject, TArray<AActor*>& CurrentlyRenderedActors, float MinRecentTime);
    
    UFUNCTION(BlueprintCallable)
    static void Visibility__GetNotRenderedActors(UObject* WorldContextObject, TArray<AActor*>& CurrentlyNotRenderedActors, float MinRecentTime);
    
    UFUNCTION(BlueprintCallable)
    static bool ViewportPositionDeproject(UObject* WorldContextObject, const FVector2D& ViewportPosition, FVector& OutWorldOrigin, FVector& OutWorldDirection);
    
    UFUNCTION(BlueprintCallable)
    static bool Viewport__SetMousePosition(const APlayerController* ThePC, const float& PosX, const float& PosY);
    
    UFUNCTION(BlueprintPure)
    static bool Viewport__GetMousePosition(const APlayerController* ThePC, float& PosX, float& PosY);
    
    UFUNCTION(BlueprintPure)
    static bool Viewport__GetCenterOfViewport(const APlayerController* ThePC, float& PosX, float& PosY);
    
    UFUNCTION(BlueprintCallable)
    static bool Viewport__EnableWorldRendering(const APlayerController* ThePC, bool RenderTheWorld);
    
    UFUNCTION(BlueprintCallable)
    static bool VictorySoundVolumeChange(USoundClass* SoundClassObject, float NewVolume);
    
    UFUNCTION(BlueprintCallable)
    static void VictorySortIntArray(UPARAM(Ref) TArray<int32>& IntArray, TArray<int32>& IntArrayRef);
    
    UFUNCTION(BlueprintCallable)
    static void VictorySortFloatArray(UPARAM(Ref) TArray<float>& FloatArray, TArray<float>& FloatArrayRef);
    
    UFUNCTION(BlueprintCallable)
    static void VictorySimulateMouseWheel(const float& Delta);
    
    UFUNCTION(BlueprintCallable)
    static void VictorySimulateKeyPress(APlayerController* ThePC, FKey Key, TEnumAsByte<EInputEvent> EventType);
    
    UFUNCTION(BlueprintCallable)
    static void VictorySetCustomConfigVar_Vector2D(const FString& SectionName, const FString& VariableName, FVector2D Value);
    
    UFUNCTION(BlueprintCallable)
    static void VictorySetCustomConfigVar_Vector(const FString& SectionName, const FString& VariableName, FVector Value);
    
    UFUNCTION(BlueprintCallable)
    static void VictorySetCustomConfigVar_String(const FString& SectionName, const FString& VariableName, const FString& Value);
    
    UFUNCTION(BlueprintCallable)
    static void VictorySetCustomConfigVar_Rotator(const FString& SectionName, const FString& VariableName, FRotator Value);
    
    UFUNCTION(BlueprintCallable)
    static void VictorySetCustomConfigVar_Int(const FString& SectionName, const FString& VariableName, int32 Value);
    
    UFUNCTION(BlueprintCallable)
    static void VictorySetCustomConfigVar_Float(const FString& SectionName, const FString& VariableName, float Value);
    
    UFUNCTION(BlueprintCallable)
    static void VictorySetCustomConfigVar_Color(const FString& SectionName, const FString& VariableName, FLinearColor Value);
    
    UFUNCTION(BlueprintCallable)
    static void VictorySetCustomConfigVar_Bool(const FString& SectionName, const FString& VariableName, bool Value);
    
    UFUNCTION(BlueprintCallable)
    static void VictoryRemoveAxisKeyBind(FVictoryInputAxis ToRemove);
    
    UFUNCTION(BlueprintCallable)
    static void VictoryRemoveActionKeyBind(FVictoryInput ToRemove);
    
    UFUNCTION(BlueprintCallable)
    static bool VictoryReBindAxisKey(FVictoryInputAxis Original, FVictoryInputAxis NewBinding);
    
    UFUNCTION(BlueprintCallable)
    static bool VictoryReBindActionKey(FVictoryInput Original, FVictoryInput NewBinding);
    
    UFUNCTION(BlueprintCallable)
    static bool VictoryPhysics_UpdateAngularDamping(UPrimitiveComponent* CompToUpdate, float NewAngularDamping);
    
    UFUNCTION(BlueprintPure)
    static FString VictoryPaths__WindowsNoEditorDir();
    
    UFUNCTION(BlueprintPure)
    static FString VictoryPaths__Win64Dir_BinaryLocation();
    
    UFUNCTION(BlueprintPure)
    static FString VictoryPaths__ScreenShotsDir();
    
    UFUNCTION(BlueprintPure)
    static FString VictoryPaths__SavedDir();
    
    UFUNCTION(BlueprintPure)
    static FString VictoryPaths__LogsDir();
    
    UFUNCTION(BlueprintPure)
    static FString VictoryPaths__GameRootDirectory();
    
    UFUNCTION(BlueprintPure)
    static FString VictoryPaths__ConfigDir();
    
    UFUNCTION(BlueprintCallable)
    static ULevelStreaming* VictoryLoadLevelInstance(UObject* WorldContextObject, const FString& MapFolderOffOfContent, const FString& LevelName, int32 InstanceNumber, FVector Location, FRotator Rotation, bool& Success);
    
    UFUNCTION(BlueprintPure)
    static void VictoryISM_GetAllVictoryISMActors(UObject* WorldContextObject, TArray<AVictoryISM*>& Out);
    
    UFUNCTION(BlueprintCallable)
    static void VictoryISM_ConvertToVictoryISMActors(UObject* WorldContextObject, TSubclassOf<AActor> ActorClass, TArray<AVictoryISM*>& CreatedISMActors, bool DestroyOriginalActors, int32 MinCountToCreateISM);
    
    UFUNCTION(BlueprintPure)
    static bool VictoryIsApplicationRunning(int32 ProcessId);
    
    UFUNCTION(BlueprintCallable)
    static void VictoryIntPlusEquals(UPARAM(Ref) int32& Int, int32 Add, int32& IntOut);
    
    UFUNCTION(BlueprintCallable)
    static void VictoryIntMinusEquals(UPARAM(Ref) int32& Int, int32 Sub, int32& IntOut);
    
    UFUNCTION(BlueprintPure)
    static FVictoryInputAxis VictoryGetVictoryInputAxis(const FKeyEvent& KeyEvent);
    
    UFUNCTION(BlueprintPure)
    static FVictoryInput VictoryGetVictoryInput(const FKeyEvent& KeyEvent);
    
    UFUNCTION(BlueprintPure)
    static float VictoryGetSoundVolume(USoundClass* SoundClassObject);
    
    UFUNCTION(BlueprintPure)
    static FVector2D VictoryGetCustomConfigVar_Vector2D(const FString& SectionName, const FString& VariableName, bool& IsValid);
    
    UFUNCTION(BlueprintPure)
    static FVector VictoryGetCustomConfigVar_Vector(const FString& SectionName, const FString& VariableName, bool& IsValid);
    
    UFUNCTION(BlueprintPure)
    static FString VictoryGetCustomConfigVar_String(const FString& SectionName, const FString& VariableName, bool& IsValid);
    
    UFUNCTION(BlueprintPure)
    static FRotator VictoryGetCustomConfigVar_Rotator(const FString& SectionName, const FString& VariableName, bool& IsValid);
    
    UFUNCTION(BlueprintPure)
    static int32 VictoryGetCustomConfigVar_Int(const FString& SectionName, const FString& VariableName, bool& IsValid);
    
    UFUNCTION(BlueprintPure)
    static float VictoryGetCustomConfigVar_Float(const FString& SectionName, const FString& VariableName, bool& IsValid);
    
    UFUNCTION(BlueprintPure)
    static FLinearColor VictoryGetCustomConfigVar_Color(const FString& SectionName, const FString& VariableName, bool& IsValid);
    
    UFUNCTION(BlueprintPure)
    static bool VictoryGetCustomConfigVar_Bool(const FString& SectionName, const FString& VariableName, bool& IsValid);
    
    UFUNCTION(BlueprintPure)
    static FString VictoryGetApplicationName(int32 ProcessId);
    
    UFUNCTION(BlueprintPure)
    static void VictoryGetAllAxisKeyBindings(TArray<FVictoryInputAxis>& Bindings);
    
    UFUNCTION(BlueprintPure)
    static void VictoryGetAllAxisAndActionMappingsForKey(FKey Key, TArray<FVictoryInput>& ActionBindings, TArray<FVictoryInputAxis>& AxisBindings);
    
    UFUNCTION(BlueprintPure)
    static void VictoryGetAllActionKeyBindings(TArray<FVictoryInput>& Bindings);
    
    UFUNCTION(BlueprintCallable)
    static void VictoryFloatPlusEquals(UPARAM(Ref) float& Float, float Add, float& FloatOut);
    
    UFUNCTION(BlueprintCallable)
    static void VictoryFloatMinusEquals(UPARAM(Ref) float& Float, float Sub, float& FloatOut);
    
    UFUNCTION(BlueprintCallable)
    static bool VictoryDestructible_DestroyChunk(UDestructibleComponent* DestructibleComp, int32 HitItem);
    
    UFUNCTION(BlueprintCallable)
    static void VictoryCreateProc(int32& ProcessId, const FString& FullPathOfProgramToRun, TArray<FString> CommandlineArgs, bool Detach, bool Hidden, int32 Priority, const FString& OptionalWorkingDirectory, URamaVictoryPluginCreateProcessPipe* ReadPipeObject);
    
    UFUNCTION(BlueprintCallable)
    static void VictoryAppendInline(UPARAM(Ref) FString& String, const FString& ToAppend, FString& Result, bool AppendNewline);
    
    UFUNCTION(BlueprintPure)
    static FString Victory_SecondsToHoursMinutesSeconds(float Seconds, bool TrimZeroes);
    
    UFUNCTION(BlueprintCallable)
    static void Victory_SaveStringToOSClipboard(const FString& ToClipboard);
    
    UFUNCTION(BlueprintCallable)
    static bool Victory_SavePixels(const FString& FullFilePath, int32 Width, int32 Height, const TArray<FLinearColor>& ImagePixels, bool SaveAsBMP, bool sRGB, FString& ErrorString);
    
    UFUNCTION(BlueprintPure)
    static UTexture2D* Victory_LoadTexture2D_FromFile_Pixels(const FString& FullFilePath, EJoyImageFormats ImageFormat, bool& IsValid, int32& Width, int32& Height, TArray<FLinearColor>& OutPixels);
    
    UFUNCTION(BlueprintPure)
    static UTexture2D* Victory_LoadTexture2D_FromFile(const FString& FullFilePath, EJoyImageFormats ImageFormat, bool& IsValid, int32& Width, int32& Height);
    
    UFUNCTION(BlueprintPure)
    static void Victory_GetStringFromOSClipboard(FString& FromClipboard);
    
    UFUNCTION(BlueprintCallable)
    static bool Victory_GetPixelsArrayFromT2D(UTexture2D* T2D, int32& TextureWidth, int32& TextureHeight, TArray<FLinearColor>& PixelArray);
    
    UFUNCTION(BlueprintCallable)
    static bool Victory_GetPixelFromT2D(UTexture2D* T2D, int32 X, int32 Y, FLinearColor& PixelColor);
    
    UFUNCTION(BlueprintPure)
    static FString Victory_GetGRHIAdapterName();
    
    UFUNCTION(BlueprintPure)
    static void Victory_GetGPUInfo(FString& DeviceDescription, FString& Provider, FString& DriverVersion, FString& DriverDate);
    
    UFUNCTION(BlueprintPure)
    static FString Victory_GetGPUBrand();
    
    UFUNCTION(BlueprintPure)
    static bool Victory_Get_Pixel(const TArray<FLinearColor>& Pixels, int32 ImageHeight, int32 X, int32 Y, FLinearColor& FoundColor);
    
    UFUNCTION(BlueprintCallable)
    static TEnumAsByte<EPathFollowingRequestResult::Type> Victory_AI_MoveToWithFilter(APawn* Pawn, const FVector& Dest, TSubclassOf<UNavigationQueryFilter> FilterClass, float AcceptanceRadius, bool bProjectDestinationToNavigation, bool bStopOnOverlap, bool bCanStrafe);
    
    UFUNCTION(BlueprintPure)
    static float VerticalFOV(float NewHorizontalFOV, float AspectRatio);
    
    UFUNCTION(BlueprintPure)
    static FVector2D Vector2DInterpTo_Constant(FVector2D Current, FVector2D Target, float DeltaTime, float InterpSpeed);
    
    UFUNCTION(BlueprintPure)
    static FVector2D Vector2DInterpTo(FVector2D Current, FVector2D Target, float DeltaTime, float InterpSpeed);
    
    UFUNCTION(BlueprintPure)
    static void UTCToLocal(const FDateTime& UTCTime, FDateTime& LocalTime);
    
    UFUNCTION(BlueprintCallable)
    static void UnloadStreamingLevel(ULevelStreamingDynamic* LevelInstance);
    
    UFUNCTION(BlueprintPure)
    FRotator TransformVectorToActorSpaceAngle(AActor* Actor, const FVector& InVector);
    
    UFUNCTION(BlueprintPure)
    FVector TransformVectorToActorSpace(AActor* Actor, const FVector& InVector);
    
    UFUNCTION(BlueprintCallable)
    static AActor* Traces__CharacterMeshTrace___ClosestSocket(UObject* WorldContextObject, const AActor* TraceOwner, const FVector& TraceStart, const FVector& TraceEnd, FVector& OutImpactPoint, FVector& OutImpactNormal, FName& ClosestSocketName, FVector& SocketLocation, bool& IsValid);
    
    UFUNCTION(BlueprintCallable)
    static AActor* Traces__CharacterMeshTrace___ClosestBone(AActor* TraceOwner, const FVector& TraceStart, const FVector& TraceEnd, FVector& OutImpactPoint, FVector& OutImpactNormal, FName& ClosestBoneName, FVector& ClosestBoneLocation, bool& IsValid);
    
    UFUNCTION(BlueprintCallable)
    static bool TraceData__GetTraceDataFromSkeletalMeshSocket(FVector& TraceStart, FVector& TraceEnd, USkeletalMeshComponent* Mesh, const FRotator& TraceRotation, float TraceLength, FName Socket, bool DrawTraceData, FLinearColor TraceDataColor, float TraceDataThickness);
    
    UFUNCTION(BlueprintCallable)
    static bool TraceData__GetTraceDataFromCharacterSocket(FVector& TraceStart, FVector& TraceEnd, AActor* TheCharacter, const FRotator& TraceRotation, float TraceLength, FName Socket, bool DrawTraceData, FLinearColor TraceDataColor, float TraceDataThickness);
    
    UFUNCTION(BlueprintPure)
    static int32 Text_ToInt(const FText& Text, bool UseDotForThousands);
    
    UFUNCTION(BlueprintPure)
    static float Text_ToFloat(const FText& Text, bool UseDotForThousands);
    
    UFUNCTION(BlueprintPure)
    static bool Text_IsNumeric(const FText& Text);
    
    UFUNCTION(BlueprintPure)
    static bool StringIsEmpty(const FString& Target);
    
    UFUNCTION(BlueprintPure)
    static void StringConversion__GetFloatAsStringWithPrecision(float TheFloat, FString& TheString, int32 Precision, bool IncludeLeadingZero);
    
    UFUNCTION(BlueprintPure)
    static void String__ExplodeString(TArray<FString>& OutputStrings, const FString& InputString, const FString& Separator, int32 Limit, bool bTrimElements);
    
    UFUNCTION(BlueprintPure)
    static FString String__CombineStrings_Multi(const FString& A, const FString& B);
    
    UFUNCTION(BlueprintPure)
    static FString String__CombineStrings(const FString& StringFirst, const FString& StringSecond, const FString& Separator, const FString& StringFirstLabel, const FString& StringSecondLabel);
    
    UFUNCTION(BlueprintCallable)
    static AActor* SpawnActorIntoLevel(UObject* WorldContextObject, TSubclassOf<AActor> ActorClass, FName Level, FVector Location, FRotator Rotation, bool SpawnEvenIfColliding);
    
    UFUNCTION(BlueprintCallable)
    static void SetGenericTeamId(AActor* Target, uint8 NewTeamId);
    
    UFUNCTION(BlueprintCallable)
    static void SetComponentTickRate(UActorComponent* Component, float Seconds);
    
    UFUNCTION(BlueprintCallable)
    static void SetBloomIntensity(APostProcessVolume* PostProcessVolume, float Intensity);
    
    UFUNCTION(BlueprintCallable)
    static void ServerTravel(UObject* WorldContextObject, const FString& MapName, bool bSkipNotifyPlayers);
    
    UFUNCTION(BlueprintCallable)
    static void Selection_SelectionBox(UObject* WorldContextObject, TArray<AActor*>& SelectedActors, FVector2D AnchorPoint, FVector2D DraggedPoint, TSubclassOf<AActor> ClassFilter);
    
    UFUNCTION(BlueprintCallable)
    static void seedRandWithTime();
    
    UFUNCTION(BlueprintCallable)
    static void seedRandWithEntropy();
    
    UFUNCTION(BlueprintCallable)
    static void seedRand(int32 Seed);
    
    UFUNCTION(BlueprintCallable)
    static bool ScreenShots_Rename_Move_Most_Recent(FString& OriginalFileName, const FString& NewName, const FString& NewAbsoluteFolderPath, bool HighResolution);
    
    UFUNCTION(BlueprintPure)
    static void SaveGameObject_GetMostRecentSaveSlotFileName(FString& Filename, bool& bFound);
    
    UFUNCTION(BlueprintPure)
    static void SaveGameObject_GetAllSaveSlotFileNames(TArray<FString>& FileNames);
    
    UFUNCTION(BlueprintCallable)
    static void Rendering__UnFreezeGameRendering();
    
    UFUNCTION(BlueprintCallable)
    static void Rendering__FreezeGameRendering();
    
    UFUNCTION(BlueprintCallable)
    static void RemoveFromStreamingLevels(UObject* WorldContextObject, const FLevelStreamInstanceInfo& LevelInstanceInfo);
    
    UFUNCTION(BlueprintCallable)
    static void RemoveAllWidgetsOfClass(UObject* WorldContextObject, TSubclassOf<UUserWidget> WidgetClass);
    
    UFUNCTION(BlueprintPure)
    static void RealWorldTime__GetTimePassedSincePreviousTime(const FString& PreviousTime, float& MilliSeconds, float& Seconds, float& Minutes, float& Hours);
    
    UFUNCTION(BlueprintPure)
    static void RealWorldTime__GetDifferenceBetweenTimes(const FString& PreviousTime1, const FString& PreviousTime2, float& MilliSeconds, float& Seconds, float& Minutes, float& Hours);
    
    UFUNCTION(BlueprintPure)
    static FString RealWorldTime__GetCurrentOSTime(int32& MilliSeconds, int32& Seconds, int32& Minutes, int32& Hours12, int32& Hours24, int32& Day, int32& Month, int32& Year);
    
    UFUNCTION(BlueprintPure)
    static int32 RandInt_uniDis_MT();
    
    UFUNCTION(BlueprintPure)
    static int32 RandInt_uniDis();
    
    UFUNCTION(BlueprintPure)
    static int32 RandInt_MINMAX_uniDis_MT(int32 iMin, int32 iMax);
    
    UFUNCTION(BlueprintPure)
    static int32 RandInt_MINMAX_uniDis(int32 iMin, int32 iMax);
    
    UFUNCTION(BlueprintPure)
    static float RandFloat_uniDis_MT();
    
    UFUNCTION(BlueprintPure)
    static float RandFloat_uniDis();
    
    UFUNCTION(BlueprintPure)
    static float RandFloat_MINMAX_uniDis_MT(float iMin, float iMax);
    
    UFUNCTION(BlueprintPure)
    static float RandFloat_MINMAX_uniDis(float iMin, float iMax);
    
    UFUNCTION(BlueprintPure)
    static bool RandBool_Bernoulli_MT(float fBias);
    
    UFUNCTION(BlueprintPure)
    static bool RandBool_Bernoulli(float fBias);
    
    UFUNCTION(BlueprintCallable)
    static FVector2D ProjectWorldToScreenPosition(const FVector& WorldLocation);
    
    UFUNCTION(BlueprintPure)
    static void PointDistanceToPlane(const FPlane& Plane, FVector Point, float& Distance);
    
    UFUNCTION(BlueprintCallable)
    static UAudioComponent* PlaySoundAttachedFromFile(const FString& FilePath, USceneComponent* AttachToComponent, FName AttachPointName, FVector Location, TEnumAsByte<EAttachLocation::Type> LocationType, bool bStopWhenAttachedToDestroyed, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundAttenuation* AttenuationSettings);
    
    UFUNCTION(BlueprintCallable)
    static void PlaySoundAtLocationFromFile(UObject* WorldContextObject, const FString& FilePath, FVector Location, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundAttenuation* AttenuationSettings);
    
    UFUNCTION(BlueprintCallable)
    static bool PlayerState_GetPlayerID(APlayerController* ThePC, int32& PlayerId);
    
    UFUNCTION(BlueprintCallable)
    static bool PlayerController_GetControllerID(APlayerController* ThePC, int32& ControllerId);
    
    UFUNCTION(BlueprintCallable)
    static bool Physics__UpdateCharacterCameraToRagdollLocation(AActor* TheCharacter, float HeightOffset, float InterpSpeed);
    
    UFUNCTION(BlueprintCallable)
    static bool Physics__LeaveRagDoll(AActor* TheCharacter, bool SetToFallingMovementMode, float HeightAboveRBMesh, const FVector& InitLocation, const FRotator& InitRotation);
    
    UFUNCTION(BlueprintCallable)
    static bool Physics__IsRagDoll(AActor* TheCharacter);
    
    UFUNCTION(BlueprintCallable)
    static bool Physics__InitializeVictoryRagDoll(AActor* TheCharacter, FVector& InitLocation, FRotator& InitRotation);
    
    UFUNCTION(BlueprintCallable)
    static bool Physics__GetLocationofRagDoll(AActor* TheCharacter, FVector& RagdollLocation);
    
    UFUNCTION(BlueprintCallable)
    static bool Physics__EnterRagDoll(AActor* TheCharacter);
    
    UFUNCTION(BlueprintPure)
    static bool OptionsMenu__GetDisplayAdapterScreenResolutions(TArray<int32>& Widths, TArray<int32>& Heights, TArray<int32>& RefreshRates, bool IncludeRefreshRates);
    
    UFUNCTION(BlueprintPure)
    static void OperatingSystem__GetCurrentPlatform(bool& Windows_, bool& Mac, bool& Linux, bool& IOS, bool& Android, bool& Android_ARM, bool& Android_Vulkan, bool& PS4, bool& XboxOne, bool& HTML5, bool& APPLE);
    
    UFUNCTION(BlueprintCallable)
    static void Open_URL_In_Web_Browser(const FString& TheURL);
    
    UFUNCTION(BlueprintPure)
    static bool NotEqual_Vector2DVector2D(FVector2D A, FVector2D B, float ErrorTolerance);
    
    UFUNCTION(BlueprintCallable)
    static bool Mobility__SetSceneCompMobility(USceneComponent* SceneComp, TEnumAsByte<EComponentMobility::Type> NewMobility);
    
    UFUNCTION(BlueprintPure)
    static void MinOfIntArray(const TArray<int32>& IntArray, int32& IndexOfMinValue, int32& MinValue);
    
    UFUNCTION(BlueprintPure)
    static void MinOfFloatArray(const TArray<float>& FloatArray, int32& IndexOfMinValue, float& MinValue);
    
    UFUNCTION(BlueprintPure)
    static void MaxOfIntArray(const TArray<int32>& IntArray, int32& IndexOfMaxValue, int32& MaxValue);
    
    UFUNCTION(BlueprintPure)
    static void MaxOfFloatArray(const TArray<float>& FloatArray, int32& IndexOfMaxValue, float& MaxValue);
    
    UFUNCTION(BlueprintPure)
    static float MapRangeClamped(float Value, float InRangeA, float InRangeB, float OutRangeA, float OutRangeB);
    
    UFUNCTION(BlueprintCallable)
    static void Loops_ResetBPRunawayCounter();
    
    UFUNCTION(BlueprintCallable)
    static UTexture2D* LoadTexture2D_FromFileByExtension(const FString& ImagePath, bool& IsValid, int32& OutWidth, int32& OutHeight);
    
    UFUNCTION(BlueprintCallable)
    static UTexture2D* LoadTexture2D_FromDDSFile(const FString& FullFilePath);
    
    UFUNCTION(BlueprintCallable)
    static bool LoadStringFromFile(FString& Result, const FString& FullFilePath);
    
    UFUNCTION(BlueprintPure)
    static bool LoadStringArrayFromFile(TArray<FString>& StringArray, int32& ArraySize, const FString& FullFilePath, bool ExcludeEmptyLines);
    
    UFUNCTION(BlueprintCallable)
    static UObject* LoadObjectFromAssetPath(UClass* ObjectClass, FName Path, bool& IsValid);
    
    UFUNCTION(BlueprintCallable)
    static bool LensFlare__GetLensFlareOffsets(APlayerController* PlayerController, AActor* LightSource, float& PitchOffset, float& YawOffset, float& RollOffset);
    
    UFUNCTION(BlueprintPure)
    static void JoyIsKey(const FKeyEvent& KeyEvent, FKey Key, bool& Ctrl, bool& Shift, bool& Alt, bool& Cmd, bool& Match);
    
    UFUNCTION(BlueprintCallable)
    static void JoyGraphicsSettings__FullScreen_Set(TEnumAsByte<EJoyGraphicsFullScreen::Type> NewSetting);
    
    UFUNCTION(BlueprintPure)
    static TEnumAsByte<EJoyGraphicsFullScreen::Type> JoyGraphicsSettings__FullScreen_Get();
    
    UFUNCTION(BlueprintPure)
    static bool JoyFileIO_GetFilesInRootAndAllSubFolders(TArray<FString>& Files, const FString& RootFolderFullPath, const FString& Ext);
    
    UFUNCTION(BlueprintPure)
    static bool JoyFileIO_GetFiles(TArray<FString>& Files, const FString& RootFolderFullPath, const FString& Ext);
    
    UFUNCTION(BlueprintPure)
    static bool IsWidgetOfClassInViewport(UObject* WorldContextObject, TSubclassOf<UUserWidget> WidgetClass);
    
    UFUNCTION(BlueprintPure)
    static bool IsStandAlone(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static bool IsPointOnPlane(const FPlane& Plane, FVector Point, float Tolerance);
    
    UFUNCTION(BlueprintPure)
    static bool IsAlphaNumeric(const FString& String);
    
    UFUNCTION(BlueprintCallable)
    static UPanelSlot* InsertChildAt(UWidget* Parent, int32 Index, UWidget* Content);
    
    UFUNCTION(BlueprintPure)
    static float HorizontalFOV(float NewVerticalFOV, float AspectRatio);
    
    UFUNCTION(BlueprintCallable)
    static void HideStreamingLevel(ULevelStreamingDynamic* LevelInstance);
    
    UFUNCTION(BlueprintPure)
    static bool HasSubstring(const FString& SearchIn, const FString& SubString, TEnumAsByte<ESearchCase::Type> SearchCase, TEnumAsByte<ESearchDir::Type> SearchDir);
    
    UFUNCTION(BlueprintCallable)
    static void GraphicsSettings__SetFrameRateToBeUnbound();
    
    UFUNCTION(BlueprintCallable)
    static void GraphicsSettings__SetFrameRateCap(float newValue);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static UWidget* GetWidgetFromName(UUserWidget* ParentUserWidget, const FName& Name);
    
    UFUNCTION(BlueprintCallable)
    static bool GetViewportPositionHitResultByChannel(UObject* WorldContextObject, const FVector2D& ViewportPosition, TEnumAsByte<ECollisionChannel> TraceChannel, bool bTraceComplex, FHitResult& OutHitResult);
    
    UFUNCTION(BlueprintCallable)
    static bool GetViewportPosition(UObject* WorldContextObject, const FVector2D& ScreenPosition, FVector2D& OutViewportPosition);
    
    UFUNCTION(BlueprintPure)
    static FVector GetVectorRelativeLocation(FVector ParentLocation, FRotator ParentRotation, FVector ChildLocation);
    
    UFUNCTION(BlueprintPure)
    static void GetUTCFromUnixTimeStamp(int64 UnixTimeStamp, FDateTime& UTCTime);
    
    UFUNCTION(BlueprintPure)
    static void GetUserDisplayAdapterBrand(bool& IsAMD, bool& IsNvidia, bool& IsIntel, bool& IsUnknown, int32& UnknownId);
    
    UFUNCTION(BlueprintPure)
    static int64 GetUnixTimeStamp(const FDateTime& UTCTime);
    
    UFUNCTION(BlueprintPure)
    static float GetTimeInPlay(AActor* Actor);
    
    UFUNCTION(BlueprintPure)
    static float GetTimeAlive(const AActor* Target);
    
    UFUNCTION(BlueprintPure)
    static bool GetStaticMeshVertexLocations(UStaticMeshComponent* Comp, TArray<FVector>& VertexPositions);
    
    UFUNCTION(BlueprintCallable)
    static USoundWave* GetSoundWaveFromFile(const FString& FilePath);
    
    UFUNCTION(BlueprintPure)
    static FRotator GetRotatorRelativeRotation(FRotator ParentRotation, FRotator ChildRotation);
    
    UFUNCTION(BlueprintPure)
    static int32 GetPlayerUniqueNetID();
    
    UFUNCTION(BlueprintCallable)
    static APlayerStart* GetPlayerStart(UObject* WorldContextObject, const FString& PlayerStartName);
    
    UFUNCTION(BlueprintPure)
    static FName GetObjectPath(UObject* Obj);
    
    UFUNCTION(BlueprintPure)
    static void GetNamesOfLoadedLevels(UObject* WorldContextObject, TArray<FString>& NamesOfLoadedLevels);
    
    UFUNCTION(BlueprintCallable)
    static FLevelStreamInstanceInfo GetLevelInstanceInfo(ULevelStreamingDynamic* LevelInstance);
    
    UFUNCTION(BlueprintPure)
    static FName GetHeadMountedDisplayDeviceType();
    
    UFUNCTION(BlueprintPure)
    static uint8 GetGenericTeamId(AActor* Target);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static UUserWidget* GetFirstWidgetOfClass(UObject* WorldContextObject, TSubclassOf<UUserWidget> WidgetClass, bool TopLevelOnly);
    
    UFUNCTION(BlueprintPure)
    static float GetDistanceToCollision(UPrimitiveComponent* CollisionComponent, const FVector& Point, FVector& ClosestPointOnCollision);
    
    UFUNCTION(BlueprintPure)
    static float GetDistanceBetweenComponentSurfaces(UPrimitiveComponent* CollisionComponent1, UPrimitiveComponent* CollisionComponent2, FVector& PointOnSurface1, FVector& PointOnSurface2);
    
    UFUNCTION(BlueprintPure)
    static float GetCreationTime(const AActor* Target);
    
    UFUNCTION(BlueprintPure)
    static FRotator GetComponentRelativeRotation(USceneComponent* ParentComponent, USceneComponent* ChildComponent);
    
    UFUNCTION(BlueprintPure)
    static FVector GetComponentRelativeLocation(USceneComponent* ParentComponent, USceneComponent* ChildComponent);
    
    UFUNCTION(BlueprintPure)
    static FString GetCommandLine();
    
    UFUNCTION(BlueprintPure)
    static AActor* GetClosestActorOfClassInRadiusOfLocation(UObject* WorldContextObject, TSubclassOf<AActor> ActorClass, FVector Center, float Radius, bool& IsValid);
    
    UFUNCTION(BlueprintPure)
    static AActor* GetClosestActorOfClassInRadiusOfActor(UObject* WorldContextObject, TSubclassOf<AActor> ActorClass, AActor* ActorCenter, float Radius, bool& IsValid);
    
    UFUNCTION(BlueprintPure)
    static void GetBoxContainingWorldPoints(const TArray<FVector>& Points, FVector& Center, FVector& Extent);
    
    UFUNCTION(BlueprintCallable)
    static void GetAllWidgetsOfClass(UObject* WorldContextObject, TSubclassOf<UUserWidget> WidgetClass, TArray<UUserWidget*>& FoundWidgets, bool TopLevelOnly);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetAllBoneNamesBelowBone(USkeletalMeshComponent* SkeletalMeshComp, FName StartingBoneName, TArray<FName>& BoneNames);
    
    UFUNCTION(BlueprintPure)
    static FRotator GetActorRelativeRotation(AActor* ParentActor, AActor* ChildActor);
    
    UFUNCTION(BlueprintPure)
    static FVector GetActorRelativeLocation(AActor* ParentActor, AActor* ChildActor);
    
    UFUNCTION(BlueprintCallable)
    static void FlushPressedKeys(APlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable)
    static void FlashGameOnTaskBar(APlayerController* PC, bool FlashContinuous, int32 MaxFlashCount, int32 FlashFrequencyMilliseconds);
    
    UFUNCTION(BlueprintCallable)
    static bool FileIO__SaveStringTextToFile(const FString& SaveDirectory, const FString& JoyfulFileName, const FString& SaveText, bool AllowOverWriting, bool AllowAppend);
    
    UFUNCTION(BlueprintCallable)
    static bool FileIO__SaveStringArrayToFile(const FString& SaveDirectory, const FString& JoyfulFileName, TArray<FString> SaveText, bool AllowOverWriting, bool AllowAppend);
    
    UFUNCTION(BlueprintPure)
    static bool EqualEqual_Vector2DVector2D(FVector2D A, FVector2D B, float ErrorTolerance);
    
    UFUNCTION(BlueprintCallable)
    static void DrawCircle(UObject* WorldContextObject, FVector Center, float Radius, int32 NumPoints, float Thickness, FLinearColor LineColor, FVector YAxis, FVector ZAxis, float Duration, bool PersistentLines);
    
    UFUNCTION(BlueprintCallable)
    static void Draw__Thick3DLineFromSocket(USkeletalMeshComponent* Mesh, const FVector& EndPoint, FName Socket, FLinearColor LineColor, float Thickness, float Duration);
    
    UFUNCTION(BlueprintCallable)
    static void Draw__Thick3DLineFromCharacterSocket(AActor* TheCharacter, const FVector& EndPoint, FName Socket, FLinearColor LineColor, float Thickness, float Duration);
    
    UFUNCTION(BlueprintCallable)
    static void Draw__Thick3DLineBetweenActors(AActor* StartActor, AActor* EndActor, FLinearColor LineColor, float Thickness, float Duration);
    
    UFUNCTION(BlueprintPure)
    static bool DoesMaterialHaveParameter(UMaterialInterface* Mat, FName Parameter);
    
    UFUNCTION(BlueprintCallable)
    static float DistanceToSurface__DistaceOfPointToMeshSurface(AStaticMeshActor* TheSMA, const FVector& TestPoint, FVector& ClosestSurfacePoint);
    
    UFUNCTION(BlueprintCallable)
    static bool Data__GetCharacterBoneLocations(AActor* TheCharacter, TArray<FVector>& BoneLocations);
    
    UFUNCTION(BlueprintCallable)
    static UTextureRenderTarget2D* CreateTextureRenderTarget2D(int32 Width, int32 Height, FLinearColor ClearColor, float Gamma);
    
    UFUNCTION(BlueprintCallable)
    static UPrimitiveComponent* CreatePrimitiveComponent(UObject* WorldContextObject, TSubclassOf<UPrimitiveComponent> CompClass, FName Name, FVector Location, FRotator Rotation);
    
    UFUNCTION(BlueprintPure)
    static FPlane CreatePlane(FVector Center, FVector Normal);
    
    UFUNCTION(BlueprintCallable)
    static UObject* CreateObject(UObject* WorldContextObject, UClass* TheObjectClass);
    
    UFUNCTION(BlueprintCallable)
    static bool CreateMD5Hash(const FString& FileToHash, const FString& FileToStoreHashTo);
    
    UFUNCTION(BlueprintPure)
    static int32 CountOccurrancesOfSubString(const FString& Source, const FString& SubString, TEnumAsByte<ESearchCase::Type> SearchCase);
    
    UFUNCTION(BlueprintPure)
    static FRotator Conversions__VectorToRotator(const FVector& TheVector);
    
    UFUNCTION(BlueprintPure)
    static void Conversions__StringToVector(const FString& String, FVector& ConvertedVector, bool& IsValid);
    
    UFUNCTION(BlueprintPure)
    static void Conversions__StringToRotator(const FString& String, FRotator& ConvertedRotator, bool& IsValid);
    
    UFUNCTION(BlueprintPure)
    static void Conversions__StringToColor(const FString& String, FLinearColor& ConvertedColor, bool& IsValid);
    
    UFUNCTION(BlueprintPure)
    static FVector Conversions__RotatorToVector(const FRotator& TheRotator);
    
    UFUNCTION(BlueprintPure)
    static void Conversions__ColorToString(const FLinearColor& Color, FString& ColorAsString);
    
    UFUNCTION(BlueprintPure)
    static int32 Conversion__FloatToRoundedInteger(float IN_Float);
    
    UFUNCTION(BlueprintCallable)
    static void constructRand();
    
    UFUNCTION(BlueprintCallable)
    static void Component_PrestreamTextures(UMeshComponent* Target, float Seconds, bool bEnableStreaming, int32 CinematicTextureGroups);
    
    UFUNCTION(BlueprintCallable)
    static bool CompareMD5Hash(const FString& MD5HashFile1, const FString& MD5HashFile2);
    
    UFUNCTION(BlueprintCallable)
    static AStaticMeshActor* Clone__StaticMeshActor(UObject* WorldContextObject, bool& IsValid, AStaticMeshActor* ToClone, FVector LocationOffset, FRotator RotationOffset);
    
    UFUNCTION(BlueprintPure)
    static bool ClientWindow__GameWindowIsForeGroundInOS();
    
    UFUNCTION(BlueprintCallable)
    static bool CharacterMovement__SetMaxMoveSpeed(ACharacter* TheCharacter, float NewMaxMoveSpeed);
    
    UFUNCTION(BlueprintPure)
    static FRotator Character__GetControllerRotation(AActor* TheCharacter);
    
    UFUNCTION(BlueprintCallable)
    static bool CaptureComponent2D_SaveImage(USceneCaptureComponent2D* Target, const FString& ImagePath, const FLinearColor ClearColour);
    
    UFUNCTION(BlueprintPure)
    static bool CaptureComponent2D_Project(USceneCaptureComponent2D* Target, FVector Location, FVector2D& OutPixelLocation);
    
    UFUNCTION(BlueprintCallable)
    static bool Capture2D_SaveImage(ASceneCapture2D* Target, const FString& ImagePath, const FLinearColor ClearColour);
    
    UFUNCTION(BlueprintPure)
    static bool Capture2D_Project(ASceneCapture2D* Target, FVector Location, FVector2D& OutPixelLocation);
    
    UFUNCTION(BlueprintCallable)
    static float Calcs__ClosestPointToSourcePoint(const FVector& Source, const TArray<FVector>& OtherPoints, FVector& ClosestPoint);
    
    UFUNCTION(BlueprintCallable)
    static void Array_Sort(const TArray<int32>& TargetArray, bool bAscendingOrder, FName VariableName);
    
    UFUNCTION(BlueprintPure)
    static bool Array_IsValidIndex(const TArray<int32>& TargetArray, int32 Index);
    
    UFUNCTION(BlueprintPure)
    static FString AppendMultiple(const FString& A, const FString& B);
    
    UFUNCTION(BlueprintCallable)
    static bool Animation__GetAimOffsetsFromRotation(AActor* AnimBPOwner, const FRotator& TheRotation, float& Pitch, float& Yaw);
    
    UFUNCTION(BlueprintCallable)
    static bool Animation__GetAimOffsets(AActor* AnimBPOwner, float& Pitch, float& Yaw);
    
    UFUNCTION(BlueprintCallable)
    static void AddToStreamingLevels(UObject* WorldContextObject, const FLevelStreamInstanceInfo& LevelInstanceInfo);
    
    UFUNCTION(BlueprintCallable)
    static void AddToActorRotation(AActor* TheActor, FRotator AddRot);
    
    UFUNCTION(BlueprintCallable)
    static void Actor_PrestreamTextures(AActor* Target, float Seconds, bool bEnableStreaming, int32 CinematicTextureGroups);
    
    UFUNCTION(BlueprintPure)
    static bool Actor__TeleportToActor(AActor* ActorToTeleport, AActor* DestinationActor);
    
    UFUNCTION(BlueprintPure)
    static void Actor__GetAttachedActors(AActor* ParentActor, TArray<AActor*>& ActorsArray);
    
    UFUNCTION(BlueprintPure)
    static APlayerController* Accessor__GetPlayerController(AActor* TheCharacter, bool& IsValid);
    
    UFUNCTION(BlueprintPure)
    static FString Accessor__GetNameAsString(const UObject* TheObject);
    
    UFUNCTION(BlueprintCallable)
    static USkeletalMeshComponent* Accessor__GetCharacterSkeletalMesh(AActor* TheCharacter, bool& IsValid);
    
};

