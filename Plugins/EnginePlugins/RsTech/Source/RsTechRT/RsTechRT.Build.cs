using UnrealBuildTool;

public class RsTechRT : ModuleRules {
    public RsTechRT(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AnimGraphRuntime",
            "AnimationCore",
            "Core",
            "CoreUObject",
            "Engine",
            "HavokCloth",
            "InputCore",
            "RsAnimTechRT",
            "SlateCore",
        });
    }
}
