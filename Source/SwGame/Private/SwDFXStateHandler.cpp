#include "SwDFXStateHandler.h"

bool USwDFXStateHandler::ShouldTryUseSyncAttack_Implementation() {
    return false;
}




bool USwDFXStateHandler::IsTargetValid_Implementation(USceneComponent* InSceneComponent) {
    return false;
}

bool USwDFXStateHandler::IsHandlerConditionsMetBP_Implementation() {
    return false;
}





USwDFXStateHandler::USwDFXStateHandler() {
    this->AttackDescriptionOverride = NULL;
    this->TargetingProfile = NULL;
    this->SyncAttackDescriptionOverride = NULL;
    this->bSawpMasterAndSlave = false;
    this->DFXState = ESwDFXState::Idle;
    this->DFXComponent = NULL;
}

