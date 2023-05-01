#include "SwForceTelekinesisAbilityEffect.h"

USwForceTelekinesisAbilityEffect::USwForceTelekinesisAbilityEffect() {
    this->ParticleTemplate = NULL;
    this->ParticleSocketName = TEXT("zTargetSocket");
    this->TelekinesisSocketName = TEXT("l_wristEnd");
    this->TelekinesisDefaultVictimSocket = TEXT("TelekinesisSocket");
    this->AngleJiggleScale = 4.50f;
    this->JiggleDuration = 0.30f;
    this->bIsAxisConstrained = false;
    this->ForceTKLoopAudio = NULL;
    this->ForceTKLoopStopAudio = NULL;
    this->TKLoopMaxSpeed = 2000.00f;
    this->TKConstraint = NULL;
    this->OverridenPhysMaterial = NULL;
}

