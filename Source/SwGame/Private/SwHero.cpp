#include "SwHero.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent
#include "SwButtonMashComponent.h"
#include "SwSaberClashComponent.h"
#include "Templates/SubclassOf.h"

void ASwHero::PlayerReaction(const FRsCharacterAnimationData& AnimData, USwReactionState* DescriptionTemplate) {
}

void ASwHero::PlayerDefendFromDefenseType(EDefenseTypes DefenseType, const FRsDirectionAnimationParameters& DefenseParameters, USkeletalMeshComponent* OverrideMeshComponent) {
}

void ASwHero::PlayerDefendFromDefenseParameters(const FSwDefenseParameters& DefenseParameters, USkeletalMeshComponent* OverrideMeshComponent) {
}

void ASwHero::PlayerDefendFromData(const URsDirectionAnimDataAsset* DefenseData, const FRsDirectionAnimationParameters& DefenseParameters, const USwDefenseState* DefenseTemplate, USkeletalMeshComponent* OverrideMeshComponent) {
}

void ASwHero::PlayerDefendFromContactDefenseParameters(EDefenseTypes DefenseType, const FSwDefenseParameters& DefenseParameters, bool bForceNewState) {
}

void ASwHero::PlayerDefendFromAttackTypeContact(const TSoftClassPtr<URsDamageType>& AttackType, const FRsDirectionAnimationParameters& DefenseParameters, bool bForceNewState) {
}

void ASwHero::PlayerDefendFromAttackType(const TSoftClassPtr<URsDamageType>& AttackType, const FRsDirectionAnimationParameters& DefenseParameters, USkeletalMeshComponent* OverrideMeshComponent) {
}

void ASwHero::PlayerDefend(const FRsCharacterAnimationData& AnimData, TSubclassOf<USwDefenseState> DescriptionOverride, USkeletalMeshComponent* OverrideMeshComponent) {
}

void ASwHero::PlayerAttackSync(TSubclassOf<USwAttackState> DescriptionOverride, URsSyncDefinition* SyncDef, bool bSwapMasterSlave) {
}

void ASwHero::PlayerAttack(const FRsCharacterAnimationData& AnimData, TSubclassOf<USwAttackState> DescriptionOverride, USkeletalMeshComponent* OverrideMeshComponent) {
}

void ASwHero::OnHeroMounted_Implementation(APawn* Mount) {
}

void ASwHero::OnHeroDismounted_Implementation(APawn* Mount) {
}

void ASwHero::OnExitMeditationNavState(ERsNavState NewState, ERsNavState PrevState) {
}

void ASwHero::OnEnterMeditationNavState(ERsNavState NewState, ERsNavState PrevState) {
}

bool ASwHero::HasAnyProjectileDamageProtection() const {
    return false;
}

USwSaberClashComponent* ASwHero::GetSaberClashComponent() const {
    return NULL;
}

void ASwHero::GetCurrentAttackAndUnBindToEnd(const FK2OnAttackEndedDelegate& Event) {
}

bool ASwHero::GetCurrentAttackAndBindToEnd(const FK2OnAttackEndedDelegate& Event) {
    return false;
}


void ASwHero::DetermineSoftLockTargetFromProfilePOV(USwTargetingProfile* profile, const FVector& SearchLocation, const FVector& searchDirection, const TArray<AActor*>& ignoreTargets, bool bForceSearch) {
}

void ASwHero::DetermineSoftLockTargetFromProfile(USwTargetingProfile* profile, const TArray<AActor*>& ignoreTargets, bool bForceSearch) {
}

void ASwHero::DeactiveForceMissingOnIncomingProjectiles() {
}

void ASwHero::BroadcastHeroMounted(APawn* Mount) {
}

void ASwHero::BroadcastHeroDismounted(APawn* Mount) {
}


void ASwHero::ActiveForceMissingOnIncomingProjectiles(float ChanceToMiss) {
}

ASwHero::ASwHero() {
    this->ConsecutiveProjectileDamageProtectionTime = 1.00f;
    this->FoliageDestructionManager = NULL;
    this->CameraRig = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("CameraRig"));
    this->ButtonMashComponent = CreateDefaultSubobject<USwButtonMashComponent>(TEXT("ButtonMashComponent"));
    this->SaberClashComponent = CreateDefaultSubobject<USwSaberClashComponent>(TEXT("SaberClashComponent"));
}

