#include "SwQuicksandSettings.h"

FSwQuicksandSettings::FSwQuicksandSettings() {
    this->SinkingSpeed = 0.00f;
    this->RisingUpSpeed = 0.00f;
    this->SinkingSpeedModifier = NULL;
    this->ImmersionPercentageToFloatOnSurface = 0.00f;
    this->ImmersionPercentageWhenHeroStandsOnTop = 0.00f;
    this->ImmersionPercentageToTriggerCharacterDeath = 0.00f;
    this->TimeToDestroyEffectAfterActorRemovalFromQuicksand = 0.00f;
    this->ParticlesToSpawnWhenImmersed = NULL;
    this->KeepParticlesAlignedWithQuicksandSurface = false;
    this->ActorClassSurfaceDeformation = NULL;
    this->EnableDirectionalFlow = false;
    this->FlowStrength = 0.00f;
    this->FlowCharacterMotionInfluenceStrength = 0.00f;
    this->BoundingBoxOnlyFromQueryAndPhysicsComponents = false;
}

