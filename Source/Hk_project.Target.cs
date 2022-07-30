using UnrealBuildTool;

public class Hk_projectTarget : TargetRules {
	public Hk_projectTarget(TargetInfo Target) : base(Target) {
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		ExtraModuleNames.AddRange(new string[] {
			"Hk_project",
		});
	}
}
