using UnrealBuildTool;

public class SwGameEditorTarget : TargetRules {
	public SwGameEditorTarget(TargetInfo Target) : base(Target) {
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		ExtraModuleNames.AddRange(new string[] {
			"SwGame",
		});
	}
}
