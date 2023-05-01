#include "SwAICharacter.h"

void ASwAICharacter::SetFightActiveIterations(int32 NewValue) {
}

void ASwAICharacter::ResetFightActiveIterations() {
}


void ASwAICharacter::K2_ReactionParried(const FHitResult& HitSweep, FName AttackType, UAnimSequenceBase* ParryReactionOverride) {
}

bool ASwAICharacter::IsUsingPatrolPath() const {
    return false;
}

bool ASwAICharacter::IsInConversation() const {
    return false;
}


int32 ASwAICharacter::GetFightActiveIterations() const {
    return 0;
}

FName ASwAICharacter::GetCurrentAttackRow() {
    return NAME_None;
}

void ASwAICharacter::GetCurrentAttackAndUnBindToEnd(const FK2OnAttackEndedDelegate& Event) {
}

bool ASwAICharacter::GetCurrentAttackAndBindToEnd(const FK2OnAttackEndedDelegate& Event) {
    return false;
}

void ASwAICharacter::AIReaction(const FRsCharacterAnimationData& AnimData, USwReactionState* DescriptionTemplate) {
}

void ASwAICharacter::AIDefendFromDefenseTypeContact(EDefenseTypes DefenseType, const FRsDirectionAnimationParameters& DefenseParameters, bool bForceNewState) {
}

void ASwAICharacter::AIDefendFromDefenseType(EDefenseTypes DefenseType, const FRsDirectionAnimationParameters& DefenseParameters) {
}

void ASwAICharacter::AIDefendFromDefenseParameters(const FSwDefenseParameters& DefenseParameters) {
}

void ASwAICharacter::AIDefendFromData(const URsDirectionAnimDataAsset* DefenseData, const FRsDirectionAnimationParameters& DefenseParameters, const USwDefenseState* DefenseTemplate) {
}

void ASwAICharacter::AIDefendFromAttackTypeContact(const TSoftClassPtr<URsDamageType>& AttackType, const FRsDirectionAnimationParameters& DefenseParameters, bool bForceNewState) {
}

void ASwAICharacter::AIDefendFromAttackType(const TSoftClassPtr<URsDamageType>& AttackType, const FRsDirectionAnimationParameters& DefenseParameters) {
}

void ASwAICharacter::AIDefendForDefenseType(ARsCharacter* Attacker, ERsCharacterDefense DefenseType) {
}

void ASwAICharacter::AIDefend(const FRsCharacterAnimationData& AnimData, USwDefenseState* DescriptionTemplate, TEnumAsByte<ERsCombatState::Type> CombatDefenseType, USkeletalMeshComponent* OverrideSkelCmp) {
}

void ASwAICharacter::AIAttackSync(USwAttackState* DescriptionTemplate, URsSyncDefinition* SyncDef, bool bSwapMasterSlave) {
}

void ASwAICharacter::AIAttack(const FRsCharacterAnimationData& AnimData, USwAttackState* DescriptionTemplate, USkeletalMeshComponent* OverrideSkelCmp) {
}

ASwAICharacter::ASwAICharacter() {
}

