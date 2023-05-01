#include "SwForceTelekinesisAbility.h"

void USwForceTelekinesisAbility::OnForceMeterBarEmptied(FName ResponsibleForceName, float TimeUntilForceRegen) {
}

USwForceTelekinesisAbility::USwForceTelekinesisAbility() {
    this->WeightTable = NULL;
    this->bShouldPauseForce = true;
    this->SuccessAnimation = NULL;
    this->TKCharacterAnimation = NULL;
    this->HeavyTKCharacterAnimation = NULL;
    this->FailAnimation = NULL;
    this->OutSection = TEXT("Out");
    this->DropSection = TEXT("Drop");
    this->EffectType = NULL;
    this->ShakeType = NULL;
    this->TimeUntilForceUsageOverTimeTriggers = 0.30f;
    this->bUsePhysicalAnimation = true;
    this->bIgnoreObjectChannel = false;
    this->bTopologyTraceChannel = false;
    this->IgnoreObjectChannel = ObjectTypeQuery1;
    this->TopologyTraceChannel = TraceTypeQuery1;
    this->ForceTKCastEvent = NULL;
    this->ForceTKCastStopEvent = NULL;
    this->PhysicalAnimationProfileTelekinesis = NULL;
    this->TurnDuration = 0.30f;
    this->CameraModeDefinition = NULL;
}

