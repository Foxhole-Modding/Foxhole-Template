using UnrealBuildTool;

public class WarEditorTarget : TargetRules {
	public WarEditorTarget(TargetInfo Target) : base(Target) {
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		ExtraModuleNames.AddRange(new string[] {
			"War",
		});
	}
}
