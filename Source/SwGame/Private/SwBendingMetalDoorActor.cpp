#include "SwBendingMetalDoorActor.h"

#include "RsWorldMapDoorComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=RsGameTechRT -ObjectName=RsWorldMapDoorComponent -FallbackName=RsWorldMapDoorComponent

void ASwBendingMetalDoorActor::TriggerPushMovement(AActor* BendingMetalDoorActor, float DirectionMultiplier, float PushInitialVelocity) {
}

ASwBendingMetalDoorActor::ASwBendingMetalDoorActor() {
    this->SaveGameType = ESwGameDestructionSaveType::SaveAtCheckpoint;
    this->SetToForceIgnoredWhenDestroyed = true;
    this->InitialPosition = 0.00f;
    this->ForwardDirectionAxis = ESwBendingMetalDoorForwardDirectionAxis::AxisY;
    this->EnableDebugDrawForAxes = false;
    this->ReactOnForcePush = false;
    this->ForcePushInitialVelocity = 0.00f;
    this->ForcePushMovementDampingCoef = 0.00f;
    this->ReactOnForcePull = false;
    this->ForcePullMode = ESwBendingMetalDoorForcePullMode::Single;
    this->ForcePullInitialVelocity = 0.00f;
    this->ForcePullMovementDampingCoef = 0.00f;
    this->WorldMapDoorComponent = CreateDefaultSubobject<URsWorldMapDoorComponent>(TEXT("RsWorldMapDoorComponent"));
    this->GoBackToInitialPositionAfterTime = 0.00f;
    this->GoBackToInitialPositionVelocity = 0.00f;
    this->TargetSkeletalMeshComponent = NULL;
    this->m_SavedPosition = 0.00f;
    this->m_SavedEncountersInstance = 0;
}

