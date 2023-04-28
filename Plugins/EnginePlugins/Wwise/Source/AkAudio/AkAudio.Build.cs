using UnrealBuildTool;

public class AkAudio : ModuleRules {
    public AkAudio(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "DeveloperSettings",
            "Engine",
            "GameplayTags",
            "MovieScene",
            "MovieSceneCapture",
            "PhysicsCore",
            "RsWorldStatePlugin",
            "SlateCore",
            "UMG",
        });
    }
}
