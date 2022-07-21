#include "VictoryBPFunctionLibrary.h"
#include "Templates/SubclassOf.h"

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

bool UVictoryBPFunctionLibrary::WorldType__InPIEWorld(UObject* WorldContextObject) {
    return false;
}

bool UVictoryBPFunctionLibrary::WorldType__InGameInstanceWorld(UObject* WorldContextObject) {
    return false;
}

bool UVictoryBPFunctionLibrary::WorldType__InEditorWorld(UObject* WorldContextObject) {
    return false;
}

bool UVictoryBPFunctionLibrary::WidgetIsChildOf(UWidget* ChildWidget, UWidget* PossibleParent) {
    return false;
}

UUserWidget* UVictoryBPFunctionLibrary::WidgetGetParentOfClass(UWidget* ChildWidget, TSubclassOf<UUserWidget> WidgetClass) {
    return NULL;
}

void UVictoryBPFunctionLibrary::WidgetGetChildrenOfClass(UWidget* ParentWidget, TArray<UUserWidget*>& ChildWidgets, TSubclassOf<UUserWidget> WidgetClass, bool bImmediateOnly) {
}

void UVictoryBPFunctionLibrary::Visibility__GetRenderedActors(UObject* WorldContextObject, TArray<AActor*>& CurrentlyRenderedActors, float MinRecentTime) {
}

void UVictoryBPFunctionLibrary::Visibility__GetNotRenderedActors(UObject* WorldContextObject, TArray<AActor*>& CurrentlyNotRenderedActors, float MinRecentTime) {
}

bool UVictoryBPFunctionLibrary::ViewportPositionDeproject(UObject* WorldContextObject, const FVector2D& ViewportPosition, FVector& OutWorldOrigin, FVector& OutWorldDirection) {
    return false;
}

bool UVictoryBPFunctionLibrary::Viewport__SetMousePosition(const APlayerController* ThePC, const float& PosX, const float& PosY) {
    return false;
}

bool UVictoryBPFunctionLibrary::Viewport__GetMousePosition(const APlayerController* ThePC, float& PosX, float& PosY) {
    return false;
}

bool UVictoryBPFunctionLibrary::Viewport__GetCenterOfViewport(const APlayerController* ThePC, float& PosX, float& PosY) {
    return false;
}

bool UVictoryBPFunctionLibrary::Viewport__EnableWorldRendering(const APlayerController* ThePC, bool RenderTheWorld) {
    return false;
}

bool UVictoryBPFunctionLibrary::VictorySoundVolumeChange(USoundClass* SoundClassObject, float NewVolume) {
    return false;
}

void UVictoryBPFunctionLibrary::VictorySortIntArray(TArray<int32>& IntArray, TArray<int32>& IntArrayRef) {
}

void UVictoryBPFunctionLibrary::VictorySortFloatArray(TArray<float>& FloatArray, TArray<float>& FloatArrayRef) {
}

void UVictoryBPFunctionLibrary::VictorySimulateMouseWheel(const float& Delta) {
}

void UVictoryBPFunctionLibrary::VictorySimulateKeyPress(APlayerController* ThePC, FKey Key, TEnumAsByte<EInputEvent> EventType) {
}

void UVictoryBPFunctionLibrary::VictorySetCustomConfigVar_Vector2D(const FString& SectionName, const FString& VariableName, FVector2D Value) {
}

void UVictoryBPFunctionLibrary::VictorySetCustomConfigVar_Vector(const FString& SectionName, const FString& VariableName, FVector Value) {
}

void UVictoryBPFunctionLibrary::VictorySetCustomConfigVar_String(const FString& SectionName, const FString& VariableName, const FString& Value) {
}

void UVictoryBPFunctionLibrary::VictorySetCustomConfigVar_Rotator(const FString& SectionName, const FString& VariableName, FRotator Value) {
}

void UVictoryBPFunctionLibrary::VictorySetCustomConfigVar_Int(const FString& SectionName, const FString& VariableName, int32 Value) {
}

void UVictoryBPFunctionLibrary::VictorySetCustomConfigVar_Float(const FString& SectionName, const FString& VariableName, float Value) {
}

void UVictoryBPFunctionLibrary::VictorySetCustomConfigVar_Color(const FString& SectionName, const FString& VariableName, FLinearColor Value) {
}

void UVictoryBPFunctionLibrary::VictorySetCustomConfigVar_Bool(const FString& SectionName, const FString& VariableName, bool Value) {
}

void UVictoryBPFunctionLibrary::VictoryRemoveAxisKeyBind(FVictoryInputAxis ToRemove) {
}

void UVictoryBPFunctionLibrary::VictoryRemoveActionKeyBind(FVictoryInput ToRemove) {
}

bool UVictoryBPFunctionLibrary::VictoryReBindAxisKey(FVictoryInputAxis Original, FVictoryInputAxis NewBinding) {
    return false;
}

bool UVictoryBPFunctionLibrary::VictoryReBindActionKey(FVictoryInput Original, FVictoryInput NewBinding) {
    return false;
}

bool UVictoryBPFunctionLibrary::VictoryPhysics_UpdateAngularDamping(UPrimitiveComponent* CompToUpdate, float NewAngularDamping) {
    return false;
}

FString UVictoryBPFunctionLibrary::VictoryPaths__WindowsNoEditorDir() {
    return TEXT("");
}

FString UVictoryBPFunctionLibrary::VictoryPaths__Win64Dir_BinaryLocation() {
    return TEXT("");
}

FString UVictoryBPFunctionLibrary::VictoryPaths__ScreenShotsDir() {
    return TEXT("");
}

FString UVictoryBPFunctionLibrary::VictoryPaths__SavedDir() {
    return TEXT("");
}

FString UVictoryBPFunctionLibrary::VictoryPaths__LogsDir() {
    return TEXT("");
}

FString UVictoryBPFunctionLibrary::VictoryPaths__GameRootDirectory() {
    return TEXT("");
}

FString UVictoryBPFunctionLibrary::VictoryPaths__ConfigDir() {
    return TEXT("");
}

ULevelStreaming* UVictoryBPFunctionLibrary::VictoryLoadLevelInstance(UObject* WorldContextObject, const FString& MapFolderOffOfContent, const FString& LevelName, int32 InstanceNumber, FVector Location, FRotator Rotation, bool& Success) {
    return NULL;
}

void UVictoryBPFunctionLibrary::VictoryISM_GetAllVictoryISMActors(UObject* WorldContextObject, TArray<AVictoryISM*>& Out) {
}

void UVictoryBPFunctionLibrary::VictoryISM_ConvertToVictoryISMActors(UObject* WorldContextObject, TSubclassOf<AActor> ActorClass, TArray<AVictoryISM*>& CreatedISMActors, bool DestroyOriginalActors, int32 MinCountToCreateISM) {
}

bool UVictoryBPFunctionLibrary::VictoryIsApplicationRunning(int32 ProcessId) {
    return false;
}

void UVictoryBPFunctionLibrary::VictoryIntPlusEquals(int32& Int, int32 Add, int32& IntOut) {
}

void UVictoryBPFunctionLibrary::VictoryIntMinusEquals(int32& Int, int32 Sub, int32& IntOut) {
}

FVictoryInputAxis UVictoryBPFunctionLibrary::VictoryGetVictoryInputAxis(const FKeyEvent& KeyEvent) {
    return FVictoryInputAxis{};
}

FVictoryInput UVictoryBPFunctionLibrary::VictoryGetVictoryInput(const FKeyEvent& KeyEvent) {
    return FVictoryInput{};
}

float UVictoryBPFunctionLibrary::VictoryGetSoundVolume(USoundClass* SoundClassObject) {
    return 0.0f;
}

FVector2D UVictoryBPFunctionLibrary::VictoryGetCustomConfigVar_Vector2D(const FString& SectionName, const FString& VariableName, bool& IsValid) {
    return FVector2D{};
}

FVector UVictoryBPFunctionLibrary::VictoryGetCustomConfigVar_Vector(const FString& SectionName, const FString& VariableName, bool& IsValid) {
    return FVector{};
}

FString UVictoryBPFunctionLibrary::VictoryGetCustomConfigVar_String(const FString& SectionName, const FString& VariableName, bool& IsValid) {
    return TEXT("");
}

FRotator UVictoryBPFunctionLibrary::VictoryGetCustomConfigVar_Rotator(const FString& SectionName, const FString& VariableName, bool& IsValid) {
    return FRotator{};
}

int32 UVictoryBPFunctionLibrary::VictoryGetCustomConfigVar_Int(const FString& SectionName, const FString& VariableName, bool& IsValid) {
    return 0;
}

float UVictoryBPFunctionLibrary::VictoryGetCustomConfigVar_Float(const FString& SectionName, const FString& VariableName, bool& IsValid) {
    return 0.0f;
}

FLinearColor UVictoryBPFunctionLibrary::VictoryGetCustomConfigVar_Color(const FString& SectionName, const FString& VariableName, bool& IsValid) {
    return FLinearColor{};
}

bool UVictoryBPFunctionLibrary::VictoryGetCustomConfigVar_Bool(const FString& SectionName, const FString& VariableName, bool& IsValid) {
    return false;
}

FString UVictoryBPFunctionLibrary::VictoryGetApplicationName(int32 ProcessId) {
    return TEXT("");
}

void UVictoryBPFunctionLibrary::VictoryGetAllAxisKeyBindings(TArray<FVictoryInputAxis>& Bindings) {
}

void UVictoryBPFunctionLibrary::VictoryGetAllAxisAndActionMappingsForKey(FKey Key, TArray<FVictoryInput>& ActionBindings, TArray<FVictoryInputAxis>& AxisBindings) {
}

void UVictoryBPFunctionLibrary::VictoryGetAllActionKeyBindings(TArray<FVictoryInput>& Bindings) {
}

void UVictoryBPFunctionLibrary::VictoryFloatPlusEquals(float& Float, float Add, float& FloatOut) {
}

void UVictoryBPFunctionLibrary::VictoryFloatMinusEquals(float& Float, float Sub, float& FloatOut) {
}

bool UVictoryBPFunctionLibrary::VictoryDestructible_DestroyChunk(UDestructibleComponent* DestructibleComp, int32 HitItem) {
    return false;
}

void UVictoryBPFunctionLibrary::VictoryCreateProc(int32& ProcessId, const FString& FullPathOfProgramToRun, TArray<FString> CommandlineArgs, bool Detach, bool Hidden, int32 Priority, const FString& OptionalWorkingDirectory, URamaVictoryPluginCreateProcessPipe* ReadPipeObject) {
}

void UVictoryBPFunctionLibrary::VictoryAppendInline(FString& String, const FString& ToAppend, FString& Result, bool AppendNewline) {
}

FString UVictoryBPFunctionLibrary::Victory_SecondsToHoursMinutesSeconds(float Seconds, bool TrimZeroes) {
    return TEXT("");
}

void UVictoryBPFunctionLibrary::Victory_SaveStringToOSClipboard(const FString& ToClipboard) {
}

bool UVictoryBPFunctionLibrary::Victory_SavePixels(const FString& FullFilePath, int32 Width, int32 Height, const TArray<FLinearColor>& ImagePixels, bool SaveAsBMP, bool sRGB, FString& ErrorString) {
    return false;
}

UTexture2D* UVictoryBPFunctionLibrary::Victory_LoadTexture2D_FromFile_Pixels(const FString& FullFilePath, EJoyImageFormats ImageFormat, bool& IsValid, int32& Width, int32& Height, TArray<FLinearColor>& OutPixels) {
    return NULL;
}

UTexture2D* UVictoryBPFunctionLibrary::Victory_LoadTexture2D_FromFile(const FString& FullFilePath, EJoyImageFormats ImageFormat, bool& IsValid, int32& Width, int32& Height) {
    return NULL;
}

void UVictoryBPFunctionLibrary::Victory_GetStringFromOSClipboard(FString& FromClipboard) {
}

bool UVictoryBPFunctionLibrary::Victory_GetPixelsArrayFromT2D(UTexture2D* T2D, int32& TextureWidth, int32& TextureHeight, TArray<FLinearColor>& PixelArray) {
    return false;
}

bool UVictoryBPFunctionLibrary::Victory_GetPixelFromT2D(UTexture2D* T2D, int32 X, int32 Y, FLinearColor& PixelColor) {
    return false;
}

FString UVictoryBPFunctionLibrary::Victory_GetGRHIAdapterName() {
    return TEXT("");
}

void UVictoryBPFunctionLibrary::Victory_GetGPUInfo(FString& DeviceDescription, FString& Provider, FString& DriverVersion, FString& DriverDate) {
}

FString UVictoryBPFunctionLibrary::Victory_GetGPUBrand() {
    return TEXT("");
}

bool UVictoryBPFunctionLibrary::Victory_Get_Pixel(const TArray<FLinearColor>& Pixels, int32 ImageHeight, int32 X, int32 Y, FLinearColor& FoundColor) {
    return false;
}

TEnumAsByte<EPathFollowingRequestResult::Type> UVictoryBPFunctionLibrary::Victory_AI_MoveToWithFilter(APawn* Pawn, const FVector& Dest, TSubclassOf<UNavigationQueryFilter> FilterClass, float AcceptanceRadius, bool bProjectDestinationToNavigation, bool bStopOnOverlap, bool bCanStrafe) {
    return EPathFollowingRequestResult::Failed;
}

float UVictoryBPFunctionLibrary::VerticalFOV(float NewHorizontalFOV, float AspectRatio) {
    return 0.0f;
}

FVector2D UVictoryBPFunctionLibrary::Vector2DInterpTo_Constant(FVector2D Current, FVector2D Target, float DeltaTime, float InterpSpeed) {
    return FVector2D{};
}

FVector2D UVictoryBPFunctionLibrary::Vector2DInterpTo(FVector2D Current, FVector2D Target, float DeltaTime, float InterpSpeed) {
    return FVector2D{};
}

void UVictoryBPFunctionLibrary::UTCToLocal(const FDateTime& UTCTime, FDateTime& LocalTime) {
}

void UVictoryBPFunctionLibrary::UnloadStreamingLevel(ULevelStreamingDynamic* LevelInstance) {
}

FRotator UVictoryBPFunctionLibrary::TransformVectorToActorSpaceAngle(AActor* Actor, const FVector& InVector) {
    return FRotator{};
}

FVector UVictoryBPFunctionLibrary::TransformVectorToActorSpace(AActor* Actor, const FVector& InVector) {
    return FVector{};
}

AActor* UVictoryBPFunctionLibrary::Traces__CharacterMeshTrace___ClosestSocket(UObject* WorldContextObject, const AActor* TraceOwner, const FVector& TraceStart, const FVector& TraceEnd, FVector& OutImpactPoint, FVector& OutImpactNormal, FName& ClosestSocketName, FVector& SocketLocation, bool& IsValid) {
    return NULL;
}

AActor* UVictoryBPFunctionLibrary::Traces__CharacterMeshTrace___ClosestBone(AActor* TraceOwner, const FVector& TraceStart, const FVector& TraceEnd, FVector& OutImpactPoint, FVector& OutImpactNormal, FName& ClosestBoneName, FVector& ClosestBoneLocation, bool& IsValid) {
    return NULL;
}

bool UVictoryBPFunctionLibrary::TraceData__GetTraceDataFromSkeletalMeshSocket(FVector& TraceStart, FVector& TraceEnd, USkeletalMeshComponent* Mesh, const FRotator& TraceRotation, float TraceLength, FName Socket, bool DrawTraceData, FLinearColor TraceDataColor, float TraceDataThickness) {
    return false;
}

bool UVictoryBPFunctionLibrary::TraceData__GetTraceDataFromCharacterSocket(FVector& TraceStart, FVector& TraceEnd, AActor* TheCharacter, const FRotator& TraceRotation, float TraceLength, FName Socket, bool DrawTraceData, FLinearColor TraceDataColor, float TraceDataThickness) {
    return false;
}

int32 UVictoryBPFunctionLibrary::Text_ToInt(const FText& Text, bool UseDotForThousands) {
    return 0;
}

float UVictoryBPFunctionLibrary::Text_ToFloat(const FText& Text, bool UseDotForThousands) {
    return 0.0f;
}

bool UVictoryBPFunctionLibrary::Text_IsNumeric(const FText& Text) {
    return false;
}

bool UVictoryBPFunctionLibrary::StringIsEmpty(const FString& Target) {
    return false;
}

void UVictoryBPFunctionLibrary::StringConversion__GetFloatAsStringWithPrecision(float TheFloat, FString& TheString, int32 Precision, bool IncludeLeadingZero) {
}

void UVictoryBPFunctionLibrary::String__ExplodeString(TArray<FString>& OutputStrings, const FString& InputString, const FString& Separator, int32 Limit, bool bTrimElements) {
}

FString UVictoryBPFunctionLibrary::String__CombineStrings_Multi(const FString& A, const FString& B) {
    return TEXT("");
}

FString UVictoryBPFunctionLibrary::String__CombineStrings(const FString& StringFirst, const FString& StringSecond, const FString& Separator, const FString& StringFirstLabel, const FString& StringSecondLabel) {
    return TEXT("");
}

AActor* UVictoryBPFunctionLibrary::SpawnActorIntoLevel(UObject* WorldContextObject, TSubclassOf<AActor> ActorClass, FName Level, FVector Location, FRotator Rotation, bool SpawnEvenIfColliding) {
    return NULL;
}

void UVictoryBPFunctionLibrary::SetGenericTeamId(AActor* Target, uint8 NewTeamId) {
}

void UVictoryBPFunctionLibrary::SetComponentTickRate(UActorComponent* Component, float Seconds) {
}

void UVictoryBPFunctionLibrary::SetBloomIntensity(APostProcessVolume* PostProcessVolume, float Intensity) {
}

void UVictoryBPFunctionLibrary::ServerTravel(UObject* WorldContextObject, const FString& MapName, bool bSkipNotifyPlayers) {
}

void UVictoryBPFunctionLibrary::Selection_SelectionBox(UObject* WorldContextObject, TArray<AActor*>& SelectedActors, FVector2D AnchorPoint, FVector2D DraggedPoint, TSubclassOf<AActor> ClassFilter) {
}

void UVictoryBPFunctionLibrary::seedRandWithTime() {
}

void UVictoryBPFunctionLibrary::seedRandWithEntropy() {
}

void UVictoryBPFunctionLibrary::seedRand(int32 Seed) {
}

bool UVictoryBPFunctionLibrary::ScreenShots_Rename_Move_Most_Recent(FString& OriginalFileName, const FString& NewName, const FString& NewAbsoluteFolderPath, bool HighResolution) {
    return false;
}

void UVictoryBPFunctionLibrary::SaveGameObject_GetMostRecentSaveSlotFileName(FString& Filename, bool& bFound) {
}

void UVictoryBPFunctionLibrary::SaveGameObject_GetAllSaveSlotFileNames(TArray<FString>& FileNames) {
}

void UVictoryBPFunctionLibrary::Rendering__UnFreezeGameRendering() {
}

void UVictoryBPFunctionLibrary::Rendering__FreezeGameRendering() {
}

void UVictoryBPFunctionLibrary::RemoveFromStreamingLevels(UObject* WorldContextObject, const FLevelStreamInstanceInfo& LevelInstanceInfo) {
}

void UVictoryBPFunctionLibrary::RemoveAllWidgetsOfClass(UObject* WorldContextObject, TSubclassOf<UUserWidget> WidgetClass) {
}

void UVictoryBPFunctionLibrary::RealWorldTime__GetTimePassedSincePreviousTime(const FString& PreviousTime, float& MilliSeconds, float& Seconds, float& Minutes, float& Hours) {
}

void UVictoryBPFunctionLibrary::RealWorldTime__GetDifferenceBetweenTimes(const FString& PreviousTime1, const FString& PreviousTime2, float& MilliSeconds, float& Seconds, float& Minutes, float& Hours) {
}

FString UVictoryBPFunctionLibrary::RealWorldTime__GetCurrentOSTime(int32& MilliSeconds, int32& Seconds, int32& Minutes, int32& Hours12, int32& Hours24, int32& Day, int32& Month, int32& Year) {
    return TEXT("");
}

int32 UVictoryBPFunctionLibrary::RandInt_uniDis_MT() {
    return 0;
}

int32 UVictoryBPFunctionLibrary::RandInt_uniDis() {
    return 0;
}

int32 UVictoryBPFunctionLibrary::RandInt_MINMAX_uniDis_MT(int32 iMin, int32 iMax) {
    return 0;
}

int32 UVictoryBPFunctionLibrary::RandInt_MINMAX_uniDis(int32 iMin, int32 iMax) {
    return 0;
}

float UVictoryBPFunctionLibrary::RandFloat_uniDis_MT() {
    return 0.0f;
}

float UVictoryBPFunctionLibrary::RandFloat_uniDis() {
    return 0.0f;
}

float UVictoryBPFunctionLibrary::RandFloat_MINMAX_uniDis_MT(float iMin, float iMax) {
    return 0.0f;
}

float UVictoryBPFunctionLibrary::RandFloat_MINMAX_uniDis(float iMin, float iMax) {
    return 0.0f;
}

bool UVictoryBPFunctionLibrary::RandBool_Bernoulli_MT(float fBias) {
    return false;
}

bool UVictoryBPFunctionLibrary::RandBool_Bernoulli(float fBias) {
    return false;
}

FVector2D UVictoryBPFunctionLibrary::ProjectWorldToScreenPosition(const FVector& WorldLocation) {
    return FVector2D{};
}

void UVictoryBPFunctionLibrary::PointDistanceToPlane(const FPlane& Plane, FVector Point, float& Distance) {
}

UAudioComponent* UVictoryBPFunctionLibrary::PlaySoundAttachedFromFile(const FString& FilePath, USceneComponent* AttachToComponent, FName AttachPointName, FVector Location, TEnumAsByte<EAttachLocation::Type> LocationType, bool bStopWhenAttachedToDestroyed, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundAttenuation* AttenuationSettings) {
    return NULL;
}

void UVictoryBPFunctionLibrary::PlaySoundAtLocationFromFile(UObject* WorldContextObject, const FString& FilePath, FVector Location, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundAttenuation* AttenuationSettings) {
}

bool UVictoryBPFunctionLibrary::PlayerState_GetPlayerID(APlayerController* ThePC, int32& PlayerId) {
    return false;
}

bool UVictoryBPFunctionLibrary::PlayerController_GetControllerID(APlayerController* ThePC, int32& ControllerId) {
    return false;
}

bool UVictoryBPFunctionLibrary::Physics__UpdateCharacterCameraToRagdollLocation(AActor* TheCharacter, float HeightOffset, float InterpSpeed) {
    return false;
}

bool UVictoryBPFunctionLibrary::Physics__LeaveRagDoll(AActor* TheCharacter, bool SetToFallingMovementMode, float HeightAboveRBMesh, const FVector& InitLocation, const FRotator& InitRotation) {
    return false;
}

bool UVictoryBPFunctionLibrary::Physics__IsRagDoll(AActor* TheCharacter) {
    return false;
}

bool UVictoryBPFunctionLibrary::Physics__InitializeVictoryRagDoll(AActor* TheCharacter, FVector& InitLocation, FRotator& InitRotation) {
    return false;
}

bool UVictoryBPFunctionLibrary::Physics__GetLocationofRagDoll(AActor* TheCharacter, FVector& RagdollLocation) {
    return false;
}

bool UVictoryBPFunctionLibrary::Physics__EnterRagDoll(AActor* TheCharacter) {
    return false;
}

bool UVictoryBPFunctionLibrary::OptionsMenu__GetDisplayAdapterScreenResolutions(TArray<int32>& Widths, TArray<int32>& Heights, TArray<int32>& RefreshRates, bool IncludeRefreshRates) {
    return false;
}

void UVictoryBPFunctionLibrary::OperatingSystem__GetCurrentPlatform(bool& Windows_, bool& Mac, bool& Linux, bool& IOS, bool& Android, bool& Android_ARM, bool& Android_Vulkan, bool& PS4, bool& XboxOne, bool& HTML5, bool& APPLE) {
}

void UVictoryBPFunctionLibrary::Open_URL_In_Web_Browser(const FString& TheURL) {
}

bool UVictoryBPFunctionLibrary::NotEqual_Vector2DVector2D(FVector2D A, FVector2D B, float ErrorTolerance) {
    return false;
}

bool UVictoryBPFunctionLibrary::Mobility__SetSceneCompMobility(USceneComponent* SceneComp, TEnumAsByte<EComponentMobility::Type> NewMobility) {
    return false;
}

void UVictoryBPFunctionLibrary::MinOfIntArray(const TArray<int32>& IntArray, int32& IndexOfMinValue, int32& MinValue) {
}

void UVictoryBPFunctionLibrary::MinOfFloatArray(const TArray<float>& FloatArray, int32& IndexOfMinValue, float& MinValue) {
}

void UVictoryBPFunctionLibrary::MaxOfIntArray(const TArray<int32>& IntArray, int32& IndexOfMaxValue, int32& MaxValue) {
}

void UVictoryBPFunctionLibrary::MaxOfFloatArray(const TArray<float>& FloatArray, int32& IndexOfMaxValue, float& MaxValue) {
}

float UVictoryBPFunctionLibrary::MapRangeClamped(float Value, float InRangeA, float InRangeB, float OutRangeA, float OutRangeB) {
    return 0.0f;
}

void UVictoryBPFunctionLibrary::Loops_ResetBPRunawayCounter() {
}

UTexture2D* UVictoryBPFunctionLibrary::LoadTexture2D_FromFileByExtension(const FString& ImagePath, bool& IsValid, int32& OutWidth, int32& OutHeight) {
    return NULL;
}

UTexture2D* UVictoryBPFunctionLibrary::LoadTexture2D_FromDDSFile(const FString& FullFilePath) {
    return NULL;
}

bool UVictoryBPFunctionLibrary::LoadStringFromFile(FString& Result, const FString& FullFilePath) {
    return false;
}

bool UVictoryBPFunctionLibrary::LoadStringArrayFromFile(TArray<FString>& StringArray, int32& ArraySize, const FString& FullFilePath, bool ExcludeEmptyLines) {
    return false;
}

UObject* UVictoryBPFunctionLibrary::LoadObjectFromAssetPath(UClass* ObjectClass, FName Path, bool& IsValid) {
    return NULL;
}

bool UVictoryBPFunctionLibrary::LensFlare__GetLensFlareOffsets(APlayerController* PlayerController, AActor* LightSource, float& PitchOffset, float& YawOffset, float& RollOffset) {
    return false;
}

void UVictoryBPFunctionLibrary::JoyIsKey(const FKeyEvent& KeyEvent, FKey Key, bool& Ctrl, bool& Shift, bool& Alt, bool& Cmd, bool& Match) {
}

void UVictoryBPFunctionLibrary::JoyGraphicsSettings__FullScreen_Set(TEnumAsByte<EJoyGraphicsFullScreen::Type> NewSetting) {
}

TEnumAsByte<EJoyGraphicsFullScreen::Type> UVictoryBPFunctionLibrary::JoyGraphicsSettings__FullScreen_Get() {
    return EJoyGraphicsFullScreen::FullScreen;
}

bool UVictoryBPFunctionLibrary::JoyFileIO_GetFilesInRootAndAllSubFolders(TArray<FString>& Files, const FString& RootFolderFullPath, const FString& Ext) {
    return false;
}

bool UVictoryBPFunctionLibrary::JoyFileIO_GetFiles(TArray<FString>& Files, const FString& RootFolderFullPath, const FString& Ext) {
    return false;
}

bool UVictoryBPFunctionLibrary::IsWidgetOfClassInViewport(UObject* WorldContextObject, TSubclassOf<UUserWidget> WidgetClass) {
    return false;
}

bool UVictoryBPFunctionLibrary::IsStandAlone(UObject* WorldContextObject) {
    return false;
}

bool UVictoryBPFunctionLibrary::IsPointOnPlane(const FPlane& Plane, FVector Point, float Tolerance) {
    return false;
}

bool UVictoryBPFunctionLibrary::IsAlphaNumeric(const FString& String) {
    return false;
}

UPanelSlot* UVictoryBPFunctionLibrary::InsertChildAt(UWidget* Parent, int32 Index, UWidget* Content) {
    return NULL;
}

float UVictoryBPFunctionLibrary::HorizontalFOV(float NewVerticalFOV, float AspectRatio) {
    return 0.0f;
}

void UVictoryBPFunctionLibrary::HideStreamingLevel(ULevelStreamingDynamic* LevelInstance) {
}

bool UVictoryBPFunctionLibrary::HasSubstring(const FString& SearchIn, const FString& SubString, TEnumAsByte<ESearchCase::Type> SearchCase, TEnumAsByte<ESearchDir::Type> SearchDir) {
    return false;
}

void UVictoryBPFunctionLibrary::GraphicsSettings__SetFrameRateToBeUnbound() {
}

void UVictoryBPFunctionLibrary::GraphicsSettings__SetFrameRateCap(float newValue) {
}

UWidget* UVictoryBPFunctionLibrary::GetWidgetFromName(UUserWidget* ParentUserWidget, const FName& Name) {
    return NULL;
}

bool UVictoryBPFunctionLibrary::GetViewportPositionHitResultByChannel(UObject* WorldContextObject, const FVector2D& ViewportPosition, TEnumAsByte<ECollisionChannel> TraceChannel, bool bTraceComplex, FHitResult& OutHitResult) {
    return false;
}

bool UVictoryBPFunctionLibrary::GetViewportPosition(UObject* WorldContextObject, const FVector2D& ScreenPosition, FVector2D& OutViewportPosition) {
    return false;
}

FVector UVictoryBPFunctionLibrary::GetVectorRelativeLocation(FVector ParentLocation, FRotator ParentRotation, FVector ChildLocation) {
    return FVector{};
}

void UVictoryBPFunctionLibrary::GetUTCFromUnixTimeStamp(int64 UnixTimeStamp, FDateTime& UTCTime) {
}

void UVictoryBPFunctionLibrary::GetUserDisplayAdapterBrand(bool& IsAMD, bool& IsNvidia, bool& IsIntel, bool& IsUnknown, int32& UnknownId) {
}

int64 UVictoryBPFunctionLibrary::GetUnixTimeStamp(const FDateTime& UTCTime) {
    return 0;
}

float UVictoryBPFunctionLibrary::GetTimeInPlay(AActor* Actor) {
    return 0.0f;
}

float UVictoryBPFunctionLibrary::GetTimeAlive(const AActor* Target) {
    return 0.0f;
}

bool UVictoryBPFunctionLibrary::GetStaticMeshVertexLocations(UStaticMeshComponent* Comp, TArray<FVector>& VertexPositions) {
    return false;
}

USoundWave* UVictoryBPFunctionLibrary::GetSoundWaveFromFile(const FString& FilePath) {
    return NULL;
}

FRotator UVictoryBPFunctionLibrary::GetRotatorRelativeRotation(FRotator ParentRotation, FRotator ChildRotation) {
    return FRotator{};
}

int32 UVictoryBPFunctionLibrary::GetPlayerUniqueNetID() {
    return 0;
}

APlayerStart* UVictoryBPFunctionLibrary::GetPlayerStart(UObject* WorldContextObject, const FString& PlayerStartName) {
    return NULL;
}

FName UVictoryBPFunctionLibrary::GetObjectPath(UObject* Obj) {
    return NAME_None;
}

void UVictoryBPFunctionLibrary::GetNamesOfLoadedLevels(UObject* WorldContextObject, TArray<FString>& NamesOfLoadedLevels) {
}

FLevelStreamInstanceInfo UVictoryBPFunctionLibrary::GetLevelInstanceInfo(ULevelStreamingDynamic* LevelInstance) {
    return FLevelStreamInstanceInfo{};
}

FName UVictoryBPFunctionLibrary::GetHeadMountedDisplayDeviceType() {
    return NAME_None;
}

uint8 UVictoryBPFunctionLibrary::GetGenericTeamId(AActor* Target) {
    return 0;
}

UUserWidget* UVictoryBPFunctionLibrary::GetFirstWidgetOfClass(UObject* WorldContextObject, TSubclassOf<UUserWidget> WidgetClass, bool TopLevelOnly) {
    return NULL;
}

float UVictoryBPFunctionLibrary::GetDistanceToCollision(UPrimitiveComponent* CollisionComponent, const FVector& Point, FVector& ClosestPointOnCollision) {
    return 0.0f;
}

float UVictoryBPFunctionLibrary::GetDistanceBetweenComponentSurfaces(UPrimitiveComponent* CollisionComponent1, UPrimitiveComponent* CollisionComponent2, FVector& PointOnSurface1, FVector& PointOnSurface2) {
    return 0.0f;
}

float UVictoryBPFunctionLibrary::GetCreationTime(const AActor* Target) {
    return 0.0f;
}

FRotator UVictoryBPFunctionLibrary::GetComponentRelativeRotation(USceneComponent* ParentComponent, USceneComponent* ChildComponent) {
    return FRotator{};
}

FVector UVictoryBPFunctionLibrary::GetComponentRelativeLocation(USceneComponent* ParentComponent, USceneComponent* ChildComponent) {
    return FVector{};
}

FString UVictoryBPFunctionLibrary::GetCommandLine() {
    return TEXT("");
}

AActor* UVictoryBPFunctionLibrary::GetClosestActorOfClassInRadiusOfLocation(UObject* WorldContextObject, TSubclassOf<AActor> ActorClass, FVector Center, float Radius, bool& IsValid) {
    return NULL;
}

AActor* UVictoryBPFunctionLibrary::GetClosestActorOfClassInRadiusOfActor(UObject* WorldContextObject, TSubclassOf<AActor> ActorClass, AActor* ActorCenter, float Radius, bool& IsValid) {
    return NULL;
}

void UVictoryBPFunctionLibrary::GetBoxContainingWorldPoints(const TArray<FVector>& Points, FVector& Center, FVector& Extent) {
}

void UVictoryBPFunctionLibrary::GetAllWidgetsOfClass(UObject* WorldContextObject, TSubclassOf<UUserWidget> WidgetClass, TArray<UUserWidget*>& FoundWidgets, bool TopLevelOnly) {
}

int32 UVictoryBPFunctionLibrary::GetAllBoneNamesBelowBone(USkeletalMeshComponent* SkeletalMeshComp, FName StartingBoneName, TArray<FName>& BoneNames) {
    return 0;
}

FRotator UVictoryBPFunctionLibrary::GetActorRelativeRotation(AActor* ParentActor, AActor* ChildActor) {
    return FRotator{};
}

FVector UVictoryBPFunctionLibrary::GetActorRelativeLocation(AActor* ParentActor, AActor* ChildActor) {
    return FVector{};
}

void UVictoryBPFunctionLibrary::FlushPressedKeys(APlayerController* PlayerController) {
}

void UVictoryBPFunctionLibrary::FlashGameOnTaskBar(APlayerController* PC, bool FlashContinuous, int32 MaxFlashCount, int32 FlashFrequencyMilliseconds) {
}

bool UVictoryBPFunctionLibrary::FileIO__SaveStringTextToFile(const FString& SaveDirectory, const FString& JoyfulFileName, const FString& SaveText, bool AllowOverWriting, bool AllowAppend) {
    return false;
}

bool UVictoryBPFunctionLibrary::FileIO__SaveStringArrayToFile(const FString& SaveDirectory, const FString& JoyfulFileName, TArray<FString> SaveText, bool AllowOverWriting, bool AllowAppend) {
    return false;
}

bool UVictoryBPFunctionLibrary::EqualEqual_Vector2DVector2D(FVector2D A, FVector2D B, float ErrorTolerance) {
    return false;
}

void UVictoryBPFunctionLibrary::DrawCircle(UObject* WorldContextObject, FVector Center, float Radius, int32 NumPoints, float Thickness, FLinearColor LineColor, FVector YAxis, FVector ZAxis, float Duration, bool PersistentLines) {
}

void UVictoryBPFunctionLibrary::Draw__Thick3DLineFromSocket(USkeletalMeshComponent* Mesh, const FVector& EndPoint, FName Socket, FLinearColor LineColor, float Thickness, float Duration) {
}

void UVictoryBPFunctionLibrary::Draw__Thick3DLineFromCharacterSocket(AActor* TheCharacter, const FVector& EndPoint, FName Socket, FLinearColor LineColor, float Thickness, float Duration) {
}

void UVictoryBPFunctionLibrary::Draw__Thick3DLineBetweenActors(AActor* StartActor, AActor* EndActor, FLinearColor LineColor, float Thickness, float Duration) {
}

bool UVictoryBPFunctionLibrary::DoesMaterialHaveParameter(UMaterialInterface* Mat, FName Parameter) {
    return false;
}

float UVictoryBPFunctionLibrary::DistanceToSurface__DistaceOfPointToMeshSurface(AStaticMeshActor* TheSMA, const FVector& TestPoint, FVector& ClosestSurfacePoint) {
    return 0.0f;
}

bool UVictoryBPFunctionLibrary::Data__GetCharacterBoneLocations(AActor* TheCharacter, TArray<FVector>& BoneLocations) {
    return false;
}

UTextureRenderTarget2D* UVictoryBPFunctionLibrary::CreateTextureRenderTarget2D(int32 Width, int32 Height, FLinearColor ClearColor, float Gamma) {
    return NULL;
}

UPrimitiveComponent* UVictoryBPFunctionLibrary::CreatePrimitiveComponent(UObject* WorldContextObject, TSubclassOf<UPrimitiveComponent> CompClass, FName Name, FVector Location, FRotator Rotation) {
    return NULL;
}

FPlane UVictoryBPFunctionLibrary::CreatePlane(FVector Center, FVector Normal) {
    return FPlane{};
}

UObject* UVictoryBPFunctionLibrary::CreateObject(UObject* WorldContextObject, UClass* TheObjectClass) {
    return NULL;
}

bool UVictoryBPFunctionLibrary::CreateMD5Hash(const FString& FileToHash, const FString& FileToStoreHashTo) {
    return false;
}

int32 UVictoryBPFunctionLibrary::CountOccurrancesOfSubString(const FString& Source, const FString& SubString, TEnumAsByte<ESearchCase::Type> SearchCase) {
    return 0;
}

FRotator UVictoryBPFunctionLibrary::Conversions__VectorToRotator(const FVector& TheVector) {
    return FRotator{};
}

void UVictoryBPFunctionLibrary::Conversions__StringToVector(const FString& String, FVector& ConvertedVector, bool& IsValid) {
}

void UVictoryBPFunctionLibrary::Conversions__StringToRotator(const FString& String, FRotator& ConvertedRotator, bool& IsValid) {
}

void UVictoryBPFunctionLibrary::Conversions__StringToColor(const FString& String, FLinearColor& ConvertedColor, bool& IsValid) {
}

FVector UVictoryBPFunctionLibrary::Conversions__RotatorToVector(const FRotator& TheRotator) {
    return FVector{};
}

void UVictoryBPFunctionLibrary::Conversions__ColorToString(const FLinearColor& Color, FString& ColorAsString) {
}

int32 UVictoryBPFunctionLibrary::Conversion__FloatToRoundedInteger(float IN_Float) {
    return 0;
}

void UVictoryBPFunctionLibrary::constructRand() {
}

void UVictoryBPFunctionLibrary::Component_PrestreamTextures(UMeshComponent* Target, float Seconds, bool bEnableStreaming, int32 CinematicTextureGroups) {
}

bool UVictoryBPFunctionLibrary::CompareMD5Hash(const FString& MD5HashFile1, const FString& MD5HashFile2) {
    return false;
}

AStaticMeshActor* UVictoryBPFunctionLibrary::Clone__StaticMeshActor(UObject* WorldContextObject, bool& IsValid, AStaticMeshActor* ToClone, FVector LocationOffset, FRotator RotationOffset) {
    return NULL;
}

bool UVictoryBPFunctionLibrary::ClientWindow__GameWindowIsForeGroundInOS() {
    return false;
}

bool UVictoryBPFunctionLibrary::CharacterMovement__SetMaxMoveSpeed(ACharacter* TheCharacter, float NewMaxMoveSpeed) {
    return false;
}

FRotator UVictoryBPFunctionLibrary::Character__GetControllerRotation(AActor* TheCharacter) {
    return FRotator{};
}

bool UVictoryBPFunctionLibrary::CaptureComponent2D_SaveImage(USceneCaptureComponent2D* Target, const FString& ImagePath, const FLinearColor ClearColour) {
    return false;
}

bool UVictoryBPFunctionLibrary::CaptureComponent2D_Project(USceneCaptureComponent2D* Target, FVector Location, FVector2D& OutPixelLocation) {
    return false;
}

bool UVictoryBPFunctionLibrary::Capture2D_SaveImage(ASceneCapture2D* Target, const FString& ImagePath, const FLinearColor ClearColour) {
    return false;
}

bool UVictoryBPFunctionLibrary::Capture2D_Project(ASceneCapture2D* Target, FVector Location, FVector2D& OutPixelLocation) {
    return false;
}

float UVictoryBPFunctionLibrary::Calcs__ClosestPointToSourcePoint(const FVector& Source, const TArray<FVector>& OtherPoints, FVector& ClosestPoint) {
    return 0.0f;
}

void UVictoryBPFunctionLibrary::Array_Sort(const TArray<int32>& TargetArray, bool bAscendingOrder, FName VariableName) {
}

bool UVictoryBPFunctionLibrary::Array_IsValidIndex(const TArray<int32>& TargetArray, int32 Index) {
    return false;
}

FString UVictoryBPFunctionLibrary::AppendMultiple(const FString& A, const FString& B) {
    return TEXT("");
}

bool UVictoryBPFunctionLibrary::Animation__GetAimOffsetsFromRotation(AActor* AnimBPOwner, const FRotator& TheRotation, float& Pitch, float& Yaw) {
    return false;
}

bool UVictoryBPFunctionLibrary::Animation__GetAimOffsets(AActor* AnimBPOwner, float& Pitch, float& Yaw) {
    return false;
}

void UVictoryBPFunctionLibrary::AddToStreamingLevels(UObject* WorldContextObject, const FLevelStreamInstanceInfo& LevelInstanceInfo) {
}

void UVictoryBPFunctionLibrary::AddToActorRotation(AActor* TheActor, FRotator AddRot) {
}

void UVictoryBPFunctionLibrary::Actor_PrestreamTextures(AActor* Target, float Seconds, bool bEnableStreaming, int32 CinematicTextureGroups) {
}

bool UVictoryBPFunctionLibrary::Actor__TeleportToActor(AActor* ActorToTeleport, AActor* DestinationActor) {
    return false;
}

void UVictoryBPFunctionLibrary::Actor__GetAttachedActors(AActor* ParentActor, TArray<AActor*>& ActorsArray) {
}

APlayerController* UVictoryBPFunctionLibrary::Accessor__GetPlayerController(AActor* TheCharacter, bool& IsValid) {
    return NULL;
}

FString UVictoryBPFunctionLibrary::Accessor__GetNameAsString(const UObject* TheObject) {
    return TEXT("");
}

USkeletalMeshComponent* UVictoryBPFunctionLibrary::Accessor__GetCharacterSkeletalMesh(AActor* TheCharacter, bool& IsValid) {
    return NULL;
}

UVictoryBPFunctionLibrary::UVictoryBPFunctionLibrary() {
}

