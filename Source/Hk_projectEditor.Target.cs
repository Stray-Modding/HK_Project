using UnrealBuildTool;

public class Hk_projectEditorTarget : TargetRules {
	public Hk_projectEditorTarget(TargetInfo Target) : base(Target) {
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		ExtraModuleNames.AddRange(new string[] {
			"Hk_project",
		});
	}
}
