using UnrealBuildTool;

public class Hk_projectGameTarget : TargetRules {
	public Hk_projectGameTarget(TargetInfo Target) : base(Target) {
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		ExtraModuleNames.AddRange(new string[] {
			"Hk_project",
		});
	}
}
