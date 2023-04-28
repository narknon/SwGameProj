#include "RsCharacter.h"
#include "Templates/SubclassOf.h"

bool ARsCharacter::WasNavState(ERsNavState State) const {
    return false;
}

float ARsCharacter::UpdateVisualZCatchUpTime_Implementation(float DeltaTime) {
    return 0.0f;
}

void ARsCharacter::UnregisterOnNavStateExited(const FRsNavStateChanged& Delegate, ERsNavState State) {
}

void ARsCharacter::UnregisterOnNavStateEntered(const FRsNavStateChanged& Delegate, ERsNavState State) {
}

float ARsCharacter::TimeSinceFullAwareness(const AActor* OtherActor) const {
    return 0.0f;
}

void ARsCharacter::StopBlockMeterDeplete(bool enable) {
}

void ARsCharacter::StartParryEnemyAttack_Implementation(ARsCharacter* Attacker, ERsCharacterDefense OriginalDefenseType) {
}

void ARsCharacter::StartGenericDefendEnemyAttack_Implementation(ARsCharacter* Attacker, ERsCharacterDefense MappedDefenseType) {
}

void ARsCharacter::StartEvadeEnemyForceAbility_Implementation(ARsCharacter* Attacker, ERsCharacterDefense OriginalDefenseType) {
}

void ARsCharacter::StartEvadeEnemyAttack_Implementation(ARsCharacter* Attacker, ERsCharacterDefense OriginalDefenseType) {
}

void ARsCharacter::StartBlockEnemyAttack_Implementation(ARsCharacter* Attacker, bool IsStaffAttack, ERsCharacterDefense OriginalDefenseType) {
}

bool ARsCharacter::ShouldPlayDeathAnimation_Implementation() const {
    return false;
}

void ARsCharacter::SetYawTargetAngle(float InYawTargetAngle) {
}

void ARsCharacter::SetWeapon(UMeshComponent* InWeapon, int32 Index) {
}

void ARsCharacter::SetVisibility(bool bEnable) {
}

void ARsCharacter::SetupDamageMaterials(const TArray<int32>& ElementIndices, const TArray<UMaterialInterface*>& Materials) {
}

void ARsCharacter::SetTotalStaminaAmount(float NewAmount, bool MaintainPct) {
}

void ARsCharacter::SetTotalBlockAmount(float NewAmount, bool MaintainPct) {
}

void ARsCharacter::SetSkipReaction(bool enable, const TArray<TSubclassOf<UDamageType>>& ExcludedDamageTypes, bool AllowReactionInForceSlow, bool AllowReactionFromBlockBreak, bool AllowReactionFromUnblockable, bool SkipOnParryReactions) {
}

void ARsCharacter::SetRidingCharacter(ARsCharacter* Character) {
}

void ARsCharacter::SetRechargeStartDelayOnDamage(float NewRechargeDelay) {
}

void ARsCharacter::SetRechargeStartDelayBlockBroken(float NewRechargeDelay) {
}

void ARsCharacter::SetRechargeStartDelay(float NewRechargeDelay) {
}

void ARsCharacter::SetRechargeRate(float NewRechargeRate) {
}

void ARsCharacter::SetOverrideReactionDefinition(const URsCharacterReactionDefinition* ReactionDefinition) {
}

void ARsCharacter::SetOverrideProjectileAimTargetByOffset(const FVector& Offset) {
}

void ARsCharacter::SetOverrideProjectileAimTargetByBone(FName Bone) {
}

void ARsCharacter::SetOverrideDefenseDefinition(URsDefenseDefinition* DefenseDefinition) {
}

void ARsCharacter::SetOverrideDeathDefinition(const URsCharacterDeathDefinition* DeathDefinition) {
}

void ARsCharacter::SetNavState(ERsNavState NewState) {
}

void ARsCharacter::SetLookAtTargetComponent(USceneComponent* InLookAtTarget, bool bResetOnReachThreshold, bool bAlsoSetFocusTarget) {
}

void ARsCharacter::SetLookAtTarget(AActor* InLookAtTarget, bool bResetOnReachThreshold, bool bAlsoSetFocusTarget) {
}

void ARsCharacter::SetLastDamageEffectType(ERsDamageEffectType DamageEffectType) {
}

void ARsCharacter::SetLastDamageCauser(AActor* DamageCauser) {
}

void ARsCharacter::SetHitPause(float Duration, float AnimRate, ARsCharacter* OtherActor) {
}

void ARsCharacter::SetHitImpulseOverrideDurationMultipler(float NewValue) {
}

void ARsCharacter::SetHitImpulseOverrideDistanceMultipler(float NewValue) {
}

void ARsCharacter::SetHitImpulseMultiplerOverrides(const FRsHitImpulseMulitplier& NewValue) {
}

void ARsCharacter::SetHitCountTrackingOverride(URsHitCountTrackingDefinition* OverrideDefinition) {
}

void ARsCharacter::SetGodMode(bool bEnable) {
}

void ARsCharacter::SetFacialRig(USkeletalMeshComponent* NewFacialRig) {
}

void ARsCharacter::SetCustomProjectileReflectionComponents(TArray<UPrimitiveComponent*> ReflectionCollisions) {
}

void ARsCharacter::SetCustomization(URsCustomizationPiece* NewPiece) {
}

void ARsCharacter::SetContextualEvaded() {
}

void ARsCharacter::SetCombatState(TEnumAsByte<ERsCombatState::Type> NewCombatState) {
}

void ARsCharacter::SetCinematicBlendInterp(float InterpValue) {
}

void ARsCharacter::SetBlockMeterPercentage(float Pct) {
}

void ARsCharacter::SetBlockMarkerOverrides(float Min, float Max) {
}

void ARsCharacter::SetBlockCountMarker(float Count) {
}

void ARsCharacter::SetBlockArcOverrides(float OverrideAngle, ERsBlockArcType Type) {
}

void ARsCharacter::SetAttackSwingDirection(ERsAttackSwingDirection Direction) {
}

void ARsCharacter::SetAnimAttachCmp(USkeletalMeshComponent* NewRig, TSubclassOf<UAnimInstance> PostAttachAnimBPClass) {
}

bool ARsCharacter::RsShouldTakeDamage_Implementation(float Damage, const UDamageType* DamageType, AController* EventInstigator, AActor* DamageCauser) const {
    return false;
}

FRsCharacterDamageModifiers ARsCharacter::RsGetDamageModifiers_Implementation(float Damage, const FRsDamageParams& DamageParams, const URsDamageType* DamageType, AController* EventInstigator, AActor* DamageCauser) const {
    return FRsCharacterDamageModifiers{};
}

FRsCharacterBlockDamageModifiers ARsCharacter::RsGetBlockDamageModifiers_Implementation(float BlockDeplete, const FRsDamageParams& DamageParams, const URsDamageType* DamageType, AController* EventInstigator, AActor* DamageCauser) const {
    return FRsCharacterBlockDamageModifiers{};
}

void ARsCharacter::RotateToDamageCauserDirectional(ERsAttackerDirection InDirection) {
}

void ARsCharacter::RotateToDamageCauser() {
}

void ARsCharacter::RotateToAlignXY(const FVector& AlignToVector, float RotationOffset) {
}

void ARsCharacter::RotateToAlignDirectionalXY(const FVector& AlignToVector, ERsAttackerDirection InDirection) {
}

void ARsCharacter::RotateToActorDirectional(AActor* TargetActor, ERsAttackerDirection InDirection) {
}

void ARsCharacter::RotateToActor(AActor* TargetActor) {
}

void ARsCharacter::RestoreStamina(float Increment) {
}

void ARsCharacter::ResetToBestNavState() {
}

void ARsCharacter::ResetParry() {
}

void ARsCharacter::ResetLookAtTarget(bool bAlsoClearFocusTarget) {
}

void ARsCharacter::ResetHitCount() {
}

void ARsCharacter::ResetDamageInfo() {
}

void ARsCharacter::ResetContextualEvade() {
}

void ARsCharacter::ResetBlockCountMarker() {
}

void ARsCharacter::ResetBlock() {
}

void ARsCharacter::RemoveStaticBlockComponent(UPrimitiveComponent* NewStaticBlockComponent) {
}

void ARsCharacter::RemoveCustomizationFromSlot(TEnumAsByte<ECustomizationSlot::Type> Slot) {
}

void ARsCharacter::RemoveCustomization(const URsCustomizationPiece* NewPiece) {
}

void ARsCharacter::RemoveAnimAttachCmp(USkeletalMeshComponent* RigToRemove) {
}

void ARsCharacter::RegisterOnNavStateExited(const FRsNavStateChanged& Delegate, ERsNavState State) {
}

void ARsCharacter::RegisterOnNavStateEntered(const FRsNavStateChanged& Delegate, ERsNavState State) {
}



bool ARsCharacter::PlayReactionAnimation(ERsCharacterReaction ReactionType, ERsAttackSwingDirection AttackSwingDirection) {
    return false;
}

UAnimMontage* ARsCharacter::PlayCharacterAnimation_WithBlendSettings(UAnimationAsset* Asset, const FMontageBlendSettings& BlendInSettings, const FMontageBlendSettings& BlendOutSettings, FName AnimationSlot, bool PlayRandomAnimation, float StartPosition, float Playrate, float BlendOutTriggerTime, FVector2D BlendSpaceInput) {
    return NULL;
}

UAnimMontage* ARsCharacter::PlayCharacterAnimation(UAnimationAsset* Asset, float BlendInTime, float BlendOutTime, FName AnimationSlot, bool PlayRandomAnimation, float StartPosition, float Playrate, float BlendOutTriggerTime, FVector2D BlendSpaceInput) {
    return NULL;
}

FRsReactionParameters ARsCharacter::OverrideReactionParameters_Implementation(const FRsReactionParameters& CurrentReactionParameters) {
    return FRsReactionParameters{};
}

void ARsCharacter::OnStartDefendEnemyAttack_Implementation(ARsCharacter* Attacker, const TSoftClassPtr<URsDamageType>& DamageClass, AActor* DamageCauser) {
}

void ARsCharacter::OnRevived() {
}


void ARsCharacter::OnQuicksandNavStateExited(ERsNavState NewState, ERsNavState PrevState) {
}

float ARsCharacter::OnPreHealthChanged_Implementation(float OldHealth, float InNewHealth) {
    return 0.0f;
}


void ARsCharacter::OnGroundTopologyChange(const ERsTopologyMode PrevMode, const ERsTopologyMode newMode, const float Proximity) {
}

void ARsCharacter::OnDied(AActor* DeathActor) {
}

void ARsCharacter::OnCombatContactEvent_Implementation(ARsCharacter* Attacker) {
}

void ARsCharacter::OnBlockBreakOtherActor_Implementation(const FRsHitEvent& DefendedAttack, ARsCharacter* OtherActor) {
}

void ARsCharacter::OnAttackParriedByOtherActor_Implementation(const FRsHitEvent& DefendedAttack, const FHitResult& HitSweep, ARsCharacter* OtherActor) {
}

void ARsCharacter::OnAttackEvadedByOtherActor_Implementation(const FRsHitEvent& DefendedAttack, const FHitResult& HitSweep, ARsCharacter* OtherActor) {
}

void ARsCharacter::OnAttackCounteredByOtherActor_Implementation(const FRsHitEvent& DefendedAttack, const FHitResult& HitSweep, ARsCharacter* OtherActor) {
}

void ARsCharacter::OnAttackBlockedByOtherActor_Implementation(const FRsHitEvent& DefendedAttack, const FHitResult& HitSweep, ARsCharacter* OtherActor) {
}

void ARsCharacter::K2_TriggerReactionWithData(AActor* Attacker, const FRsReactionDefinitionData& ReactionData, const FRsDirectionAnimationParameters& ReactionParameters, const FRotator& RotateToward, bool AlignToAttacker) {
}

void ARsCharacter::K2_TriggerReaction(AActor* Attacker, const FRsReactionParameters& ReactionParameters, const FRotator& RotateToward, bool AlignToAttacker) {
}


URsDamageType* ARsCharacter::K2_GetLastDamageType() const {
    return NULL;
}

void ARsCharacter::K2_EnableHitColliderWithDamageType(FName ColliderTag, const URsDamageType* InDamageType) {
}

void ARsCharacter::K2_EnableHitCollider(FName ColliderTag, const FRsHitEvent& InHitEvent) {
}

void ARsCharacter::K2_DisableHitCollider(FName ColliderTag) {
}

EDefenseTypes ARsCharacter::K2_DetermineDefenseType_Implementation(ARsCharacter* Attacker, const TSoftClassPtr<URsDamageType>& DamageClass) {
    return EDefenseTypes::Unknown;
}



bool ARsCharacter::IsPastCurrentBlockCountMarker() const {
    return false;
}

bool ARsCharacter::IsNavState(ERsNavState State) const {
    return false;
}

bool ARsCharacter::IsInWater() const {
    return false;
}

bool ARsCharacter::IsInGodeMode() const {
    return false;
}

bool ARsCharacter::IsInCombatState(TEnumAsByte<ERsCombatState::Type> CombatState) const {
    return false;
}

bool ARsCharacter::IsHostileTo(const AActor* OtherActor) const {
    return false;
}

bool ARsCharacter::IsHeadTrackingPaused() const {
    return false;
}

bool ARsCharacter::IsFullyAwareOf(const AActor* OtherActor) const {
    return false;
}

bool ARsCharacter::IsFriendlyTo(const AActor* OtherActor) const {
    return false;
}

bool ARsCharacter::IsEqualOrPastCurrentBlockCountMarker() const {
    return false;
}

bool ARsCharacter::IsDefenseActive() const {
    return false;
}

bool ARsCharacter::IsAlive() const {
    return false;
}

bool ARsCharacter::InNonProcessTopologyNavState() const {
    return false;
}

void ARsCharacter::ImpulsePush(AActor* DamageCauser, float Duration, float Distance) {
}

UMeshComponent* ARsCharacter::GetWeapon(int32 Index) {
    return NULL;
}

float ARsCharacter::GetTotalStaminaAmount() const {
    return 0.0f;
}

float ARsCharacter::GetTimeInCurrentNavState() const {
    return 0.0f;
}

float ARsCharacter::GetStaminaPercentage() const {
    return 0.0f;
}

float ARsCharacter::GetStaminaAmount() const {
    return 0.0f;
}

bool ARsCharacter::GetSkipReaction() const {
    return false;
}

ARsCharacter* ARsCharacter::GetRidingCharacter() const {
    return NULL;
}

ERsCharacterReaction ARsCharacter::GetReactionFromDamageType(TSubclassOf<UDamageType> DmgClass) const {
    return ERsCharacterReaction::Unknown;
}

ERsNavState ARsCharacter::GetPreviousValidNavState() const {
    return ERsNavState::null;
}

ERsNavState ARsCharacter::GetPreviousNavState() const {
    return ERsNavState::null;
}

TEnumAsByte<ERsCombatState::Type> ARsCharacter::GetPrevCombatState() const {
    return ERsCombatState::Neutral;
}

void ARsCharacter::GetParryCountStats(int32& MaxParryCount, int32& CurrentParryCount) const {
}

URsOffenseComponent* ARsCharacter::GetOffenseComponent() const {
    return NULL;
}

USkeletalMeshComponent* ARsCharacter::GetMeshForLightsaberMarks_Implementation() const {
    return NULL;
}


void ARsCharacter::GetLastNavmesh(bool& IsOnNav, float& TimeSince, FVector& NearestLocation, int32& NavRef) {
}

ERsCharacterDefense ARsCharacter::GetLastDefendType() const {
    return ERsCharacterDefense::Unknown;
}

ERsAttackSwingDirection ARsCharacter::GetLastDamageSwingDirection() const {
    return ERsAttackSwingDirection::None;
}

AController* ARsCharacter::GetLastDamageInstigator() const {
    return NULL;
}

FRsHitEvent ARsCharacter::GetLastDamageHitEvent() const {
    return FRsHitEvent{};
}

AActor* ARsCharacter::GetLastDamageCauser() const {
    return NULL;
}

ARsCharacter* ARsCharacter::GetInfoForAttackToDefend(ERsAttackSwingDirection& AttackerSwingDirection) {
    return NULL;
}

FRsHitImpulseMulitplier ARsCharacter::GetHitImpulseMultiplerOverrides(bool& HasOverride) {
    return FRsHitImpulseMulitplier{};
}

void ARsCharacter::GetHitCountStats(float& MaxHitCount, float& CurrentCount, float& InverseHitCount) const {
}

URsHealthComponent* ARsCharacter::GetHealthComponent() const {
    return NULL;
}

USkeletalMeshComponent* ARsCharacter::GetHairMeshBP_Implementation() {
    return NULL;
}

USkeletalMeshComponent* ARsCharacter::GetFacialRig() const {
    return NULL;
}

ERsAttackSwingDirection ARsCharacter::GetDefendSwingDirection() {
    return ERsAttackSwingDirection::None;
}

ARsCharacter* ARsCharacter::GetDefendAttacker() {
    return NULL;
}

ERsNavState ARsCharacter::GetCurrentNavState() const {
    return ERsNavState::null;
}

float ARsCharacter::GetCurrentHitCount() const {
    return 0.0f;
}

bool ARsCharacter::GetCurrentCinematicRootVelocity(FVector& OutVelocity) const {
    return false;
}

TEnumAsByte<ERsCombatState::Type> ARsCharacter::GetCombatState() const {
    return ERsCombatState::Neutral;
}

URsCharacterDefinition* ARsCharacter::GetCharacterDefinition() const {
    return NULL;
}

void ARsCharacter::GetBlockMeterStats(float& TotalBlockMeter, float& CurrentBlockMeterAmount, float& DepletedAmount) const {
}

float ARsCharacter::GetBlockMeterPercentage() const {
    return 0.0f;
}

float ARsCharacter::GetBlockMarker() const {
    return 0.0f;
}

void ARsCharacter::GetBlockCountStats(int32& MaxBlockCount, int32& CurrentBlockCount, int32& InverseBlockCount) const {
}

ERsCharacterDefense ARsCharacter::GetAttackVictimDefendType() const {
    return ERsCharacterDefense::Unknown;
}

ERsAttackSwingDirection ARsCharacter::GetAttackSwingDirection() const {
    return ERsAttackSwingDirection::None;
}

AActor* ARsCharacter::GetAttackingTarget() const {
    return NULL;
}

bool ARsCharacter::FindHeadBoneUpVector(FVector& OutUpVector) const {
    return false;
}

bool ARsCharacter::FindHeadBoneLocation(FVector& OutLocation) const {
    return false;
}

bool ARsCharacter::FindHeadBoneForwardVector(FVector& OutForwardVector) const {
    return false;
}

FVector ARsCharacter::FindCharacterForwardVector() {
    return FVector{};
}

void ARsCharacter::EnableAllDamageMaterials(float Opacity, float EmissiveIntensity) {
}

void ARsCharacter::DropWeapon(int32 Index) {
}

void ARsCharacter::Dismember(TArray<FDismembermentConfiguration> configs, bool MasterPoseComponentMode) {
}

ERsCharacterDefense ARsCharacter::DetermineDefenseTypeLegacy_Implementation(ARsCharacter* Attacker, ERsCharacterDefense DefendType) {
    return ERsCharacterDefense::Unknown;
}

void ARsCharacter::DecreaseBlockMeter(float Increment) {
}

void ARsCharacter::DeathMontageEnded(UAnimMontage* Montage, bool interrupted) {
}

void ARsCharacter::CloseDefenseWindow() {
}

void ARsCharacter::ClearOverrideProjectileAimTarget() {
}

void ARsCharacter::ClearHitImpulseMultiplierOverride() {
}

void ARsCharacter::ClearHitCountTrackingOverride() {
}

void ARsCharacter::ClearCustomProjectileReflectionComponents() {
}

void ARsCharacter::ClearCurrentCombatState() {
}

void ARsCharacter::ClearCombatState(TSubclassOf<URsCombatState> StateType, bool bRequireExactMatch) {
}

void ARsCharacter::ClearBlockArcOverrides(ERsBlockArcType Type) {
}

bool ARsCharacter::CanTakeDamageFromKillPlane() const {
    return false;
}

bool ARsCharacter::CanEverBlock() const {
    return false;
}

bool ARsCharacter::CanDoContextualEvade() const {
    return false;
}

void ARsCharacter::CancelFullBodyMontages(float BlendOutTime) {
}

void ARsCharacter::CancelAllMontages(float BlendOutTime) {
}

void ARsCharacter::ApplyMaterialSwatchByName(FName Name, TEnumAsByte<ECustomizationSlot::Type> Slot) {
}

void ARsCharacter::ApplyMaterialSwatchByIndex(int32 SwatchIndex, TEnumAsByte<ECustomizationSlot::Type> Slot) {
}

void ARsCharacter::AddStaticBlockComponent(UPrimitiveComponent* NewStaticBlockComponent) {
}

void ARsCharacter::AddPhysicalAnimationTickDependency(USkeletalMeshComponent* NewDependent, bool ForceAlwaysDependOnPhysicalAnimation) {
}

ARsCharacter::ARsCharacter() {
    // Null default object.
}

