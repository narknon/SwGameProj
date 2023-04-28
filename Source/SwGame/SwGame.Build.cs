using UnrealBuildTool;

public class SwGame : ModuleRules {
    public SwGame(ReadOnlyTargetRules Target) : base(Target) {
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
            "Foliage",
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
            "RsGameTechRT",
            "RsTechRT",
            "RsWorldStatePlugin",
            "SlateCore",
        });
    }
}
