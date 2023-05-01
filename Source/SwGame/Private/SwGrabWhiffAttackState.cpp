#include "SwGrabWhiffAttackState.h"

void USwGrabWhiffAttackState::OnPreGrabStart_Implementation(AActor* Victim) {
}

void USwGrabWhiffAttackState::OnGrabStart_Implementation(AActor* Victim) {
}


USwGrabWhiffAttackState::USwGrabWhiffAttackState() {
    this->SyncDefinition = NULL;
    this->SyncBlendSpaceInputType = ERsAIBlendspaceInputSource::Custom;
    this->bSwapMasterAndSlaveForGrabSync = false;
    this->bGrabSyncActive = false;
}

