using UnrealBuildTool;

public class Hk_project : ModuleRules {
    public Hk_project(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AIModule",
            "AnimationSharing",
            "Chaos",
            "Core",
            "CoreUObject",
            "DeveloperSettings",
            "Engine",
            "GameplayTags",
            "GameplayTasks",
            "InputCore",
            "JoyLibraryRuntime",
            "MovieScene",
            "MovieSceneTracks",
            "NavigationSystem",
            "PhysicsCore",
            "ProceduralMeshComponent",
            "PropertyPath",
            "Slate",
            "SlateCore",
            "StateMachineRuntime",
            "UMG",
        });
    }
}
