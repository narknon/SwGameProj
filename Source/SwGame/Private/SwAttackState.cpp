#include "SwAttackState.h"
#include "Templates/SubclassOf.h"



bool USwAttackState::ShouldAutoAdjustCameraOnAttackHit_Implementation() const {
    return false;
}

bool USwAttackState::ShouldAutoAdjustCameraOnAttackBegin_Implementation() const {
    return false;
}

void USwAttackState::RegisterDamageCauser(AActor* NewDamageCauser) {
}








void USwAttackState::ChainForceAbilityPreTrigger(TSubclassOf<URsAbility> ForceAbilityType, TEnumAsByte<ESwAbilityUpgradeLevel::Type> UpgradeLevel, const UAnimationAsset* OverrideAnimation) {
}

void USwAttackState::ChainForceAbility(TSubclassOf<URsAbility> ForceAbilityType, UAnimationAsset* AnimationOverride) {
}

UAnimMontage* USwAttackState::ChainAnimationOrAbility(const FRsCharacterAnimationData& InAnimData, const TSubclassOf<URsAbility>& AbilityType) {
    return NULL;
}

USwAttackState::USwAttackState() {
    this->bHasTickImplemetation = false;
    this->bHasShouldChainAttackImplementation = false;
}

