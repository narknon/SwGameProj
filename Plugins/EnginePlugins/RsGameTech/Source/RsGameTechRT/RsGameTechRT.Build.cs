using UnrealBuildTool;

public class RsGameTechRT : ModuleRules {
    public RsGameTechRT(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AIModule",
            "AkAudio",
            "AnimGraphRuntime",
            "AnimationCore",
            "Core",
            "CoreUObject",
            "DialoguePlugin",
            "Engine",
            "GameplayTags",
            "HavokCloth",
            "InputCore",
            "LevelSequence",
            "MovieScene",
            "NavigationSystem",
            "Niagara",
            "NiagaraCore",
            "NiagaraShader",
            "PhysicsCore",
            "RsAnimTechRT",
            "RsTechRT",
            "RsWorldStatePlugin",
            "SlateCore",
        });
    }
}
