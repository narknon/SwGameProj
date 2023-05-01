#include "SwWindFieldActor.h"

void ASwWindFieldActor::OnPrimitiveOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void ASwWindFieldActor::OnPrimitiveOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void ASwWindFieldActor::OnHeroNavStateChanged_UntilNotFalling(ERsNavState NewState, ERsNavState PrevState) {
}

void ASwWindFieldActor::OnHeroNavStateChanged(ERsNavState NewState, ERsNavState PrevState) {
}

ASwWindFieldActor::ASwWindFieldActor() {
    this->SaveGameImmediately = false;
    this->UpField = false;
    this->bAutoFall = true;
    this->AutoFallTimer = 0.30f;
    this->Enabled = true;
    this->HorizontalInfluence = 1000.00f;
    this->VerticalInfluenceMode = ERsWindFieldVerticalInfluenceMode::Standard;
    this->VerticalInfluence = 2200.00f;
    this->bIgnorePlayer = false;
    this->OnlyWhenFallingMode_ClearVerticalVelocityOnEnter = true;
    this->AccelerationTest = true;
    this->AccelerationAmount = 100.00f;
    this->AccelerationOnly = false;
    this->DebugArrowOn = false;
    this->DebugLogAffectedActor = false;
    this->FXandSound = true;
    this->bEnableActorsPushInfluence = true;
    this->bEnableMeshPushInfluence = true;
    this->PlaySoundHeadwind = NULL;
    this->PlaySoundEmitter = NULL;
    this->PlaySoundStartPoint = NULL;
    this->PlaySoundEndPoint = NULL;
    this->ObjectsForcePushAbilityEffectClass = NULL;
    this->PopBallClass = NULL;
    this->DoorFXEmitterTemplate = NULL;
    this->WindAirHeroStateModifier = NULL;
    this->WindAirHeroStateModifierDropOff = NULL;
    this->HeadWindHeroStateModifier = NULL;
    this->TailWindHeroStateModifier = NULL;
    this->GliderHeadWindHeroStateModifier = NULL;
    this->GliderTailWindHeroStateModifier = NULL;
    this->GliderCrossWindAngleInDegrees = 60.00f;
    this->GliderCrossWindHeroStateModifier = NULL;
    this->GliderUpdraftWindHeroStateModifier = NULL;
    this->GliderDowndraftWindHeroStateModifier = NULL;
    this->PhysicalAnimationProfileHorizontalWindFront = NULL;
    this->PhysicalAnimationProfileHorizontalWindBack = NULL;
    this->PhysicalAnimationProfileHorizontalWindRunningPerpendicular = NULL;
    this->CollisionComponent = NULL;
    this->ArrowComponent = NULL;
    this->StartPointComponent = NULL;
    this->EndPointComponent = NULL;
    this->BPHero = NULL;
    this->AkSoundEmitterComponent = NULL;
    this->AkSoundHeadwindComponent = NULL;
    this->AkSoundStartPointComponent = NULL;
    this->AkSoundEndPointComponent = NULL;
    this->m_DoorSpawnedEmitter = NULL;
}

