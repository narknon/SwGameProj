using UnrealBuildTool;

public class SwGameTarget : TargetRules {
	public SwGameTarget(TargetInfo Target) : base(Target) {
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		ExtraModuleNames.AddRange(new string[] {
			"SwGame",
		});
	}
}
