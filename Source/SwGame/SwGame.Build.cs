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
            "AudioExtensions",
            "AudioMixer",
            "AudioPlatformConfiguration",
            "Chaos",
            "ClothingSystemRuntimeInterface",
            "Core",
            "CoreUObject",
            "DeveloperSettings",
            "DialoguePlugin",
            "Engine",
            "Foliage",
            "GameplayTags",
            "GameplayTasks",
            "HavokCloth",
            "ImageWriteQueue",
            "InputCore",
            "Landscape",
            "LevelSequence",
            "MediaAssets",
            "MediaUtils",
            "MeshDescription",
            "MovieScene",
            "MovieSceneCapture",
            "MovieSceneTracks",
            "NavigationSystem",
            "Niagara",
            "NiagaraCore",
            "NiagaraShader",
            "OnlineSubsystem",
            "OnlineSubsystemUtils",
            "PacketHandler",
            "PhysicsCore",
            "ProceduralMeshComponent",
            "PropertyAccess",
            "PropertyPath",
            "RenderCore",
            "RsAnimTechRT",
            "RsDevNetRT",
            "RsGameTechRT",
            "RsTechRT",
            "RsWorldStatePlugin",
            "Slate",
            "SlateCore",
            "StaticMeshDescription",
            "UMG",
        });
    }
}
