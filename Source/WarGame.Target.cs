using UnrealBuildTool;

public class WarGameTarget : TargetRules {
	public WarGameTarget(TargetInfo Target) : base(Target) {
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		ExtraModuleNames.AddRange(new string[] {
			"War",
		});
	}
}
