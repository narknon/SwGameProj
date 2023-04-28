#include "RsCombatState.h"

void URsCombatState::SetStopAnimOnAbort(bool StopAnimOnAbort) {
}


void URsCombatState::PopulateActionNameList(UObject* ContextObject, TArray<FName>& Options) const {
}





bool URsCombatState::IsAttackBlockable_Implementation(const ARsCharacter* TheDefender, const URsDamageType* IncomingDamageType, const FRsDamageParams& DamageInfo, const ARsCharacter* AttackingCharacter, const AActor* DamageCauser) const {
    return false;
}

void URsCombatState::CompleteThisActionButContinueAnimation() {
}

void URsCombatState::CompleteThisAction() {
}

void URsCombatState::ChainToSyncAnimation(URsSyncDefinition* SyncDefinition, const TArray<AActor*>& Slaves, UAnimationAsset* OverrideAnimation, int32& NewSyncGroupdID, URsSyncInstance*& MasterInstance, TArray<URsSlaveSyncInstance*>& SlaveInstanceArray, const FVector2D& MasterBlendSpaceInput, const TArray<FVector2D>& SlaveBlendSpaceinputs) {
}

UAnimMontage* URsCombatState::ChainAnimation(const FRsCharacterAnimationData& InAnimData) {
    return NULL;
}

void URsCombatState::CancelThisActionButContinueAnimation() {
}

void URsCombatState::CancelThisAction() {
}

URsCombatState::URsCombatState() {
    // Null default object.
}

