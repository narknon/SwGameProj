#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "Rs/MontageBlendSettings.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "ECustomizationSlot.h"
#include "ERsTopologyMode.h"
#include "rsActor.h"
#include "DismembermentConfiguration.h"
#include "EDefenseTypes.h"
#include "ERsAttackSwingDirection.h"
#include "ERsAttackerDirection.h"
#include "ERsBlockArcType.h"
#include "ERsCharacterDefense.h"
#include "ERsCharacterReaction.h"
#include "ERsCombatState.h"
#include "ERsDamageEffectType.h"
#include "ERsNavState.h"
#include "RsAnimationTopologyBoundsInfo.h"
#include "RsCharacterBlockDamageModifiers.h"
#include "RsCharacterDamageModifiers.h"
#include "RsCharacterFinishedSettingMasterPoseComponentDelegate.h"
#include "RsCharacterInterruptedEventDelegate.h"
#include "RsCharacterPhysicsResetEventDelegate.h"
#include "RsCombatStateChangedDelegate.h"
#include "RsDamageInfo.h"
#include "RsDamageNotTakenEventDelegate.h"
#include "RsDamageParams.h"
#include "RsDidProjectileDamageEventDelegate.h"
#include "RsDirectionAnimationParameters.h"
#include "RsFrameDamageTracker.h"
#include "RsHealthChangedEventDelegate.h"
#include "RsHitColliderEventDelegate.h"
#include "RsHitCountResetEventDelegate.h"
#include "RsHitCountThresholdReachedEventDelegate.h"
#include "RsHitEvent.h"
#include "RsHitImpulseMulitplier.h"
#include "RsInstigatedAnyDamageEventDelegate.h"
#include "RsInstigatedZeroDamageEventDelegate.h"
#include "RsIsInWaterStateChangedEventDelegate.h"
#include "RsNavStateChangedDelegate.h"
#include "RsNavStateChangedMulticastDelegate.h"
#include "RsOnCharacterFoundGroundEventDelegate.h"
#include "RsOnCharacterLostGroundEventDelegate.h"
#include "RsPostReactionEventDelegate.h"
#include "RsReactionDefinitionData.h"
#include "RsReactionEventDelegate.h"
#include "RsReactionParameters.h"
#include "Templates/SubclassOf.h"
#include "RsCharacter.generated.h"

class AActor;
class AController;
class ARsCharacter;
class UAnimInstance;
class UAnimMontage;
class UAnimationAsset;
class UDamageType;
class UMaterialInterface;
class UMeshComponent;
class UPrimitiveComponent;
class URsBitStack;
class URsCharacterDeathDefinition;
class URsCharacterDefinition;
class URsCharacterReactionDefinition;
class URsCombatState;
class URsCombatStateMachine;
class URsCustomizationPiece;
class URsDamageType;
class URsDefenseDefinition;
class URsHealthComponent;
class URsHitCountTrackingDefinition;
class URsOffenseComponent;
class URsPhysicalAnimationComponent;
class USceneComponent;
class USkeletalMesh;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class ARsCharacter : public ArsActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URsBitStack* ControlStack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URsBitStack* BufferStack;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsCharacterInterruptedEvent OnCharacterInterrupted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsCharacterPhysicsResetEvent OnCharacterResetPhysics;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsDamageNotTakenEvent OnTakeNoDamage;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsHealthChangedEvent OnHealthChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsHitCountThresholdReachedEvent OnHitCountThresholdReached;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsHitCountResetEvent OnHitCountReset;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsReactionEvent OnReactionEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsPostReactionEvent OnPostReactionEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsCombatStateChanged OnCombatStateChangedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsIsInWaterStateChangedEvent OnIsInWaterStateChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsOnCharacterFoundGroundEvent OnFoundGround;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsOnCharacterLostGroundEvent OnLostGround;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsCharacterFinishedSettingMasterPoseComponent FinishedSettingMasterPoseComponentDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bShowOverlapAndCollisionObjects;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector HeadBonePrevLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector HeadBonePrevLocationRefRelative;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector HeadBoneVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector HeadBoneVelocityRefRelativeLocalSpace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlockReactAngleCosMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableHeadVelocityAnimParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector HeadVelocityOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector WindFieldDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector WindFieldDirectionLocal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseFrameOfReferenceBasedHeadVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bVerticalHeadFrameOfReferenceVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHorizontalHeadFrameOfReferenceVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HeadVelocitySmoothValueCff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HeadVelocitySmoothValueMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HeadVelocityMaxValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector RefBoneVelocityMinScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector RefBoneVelocityMaxScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName HeadBoneVelocityMaterialParamName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName HeadBoneVelocityRefRelativeLocalSpaceParamName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName WindFieldDirectionParamName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName WindFieldDirectionLocalParamName;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint32 SpawnID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LightSaberTargetBoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag SpeakerTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName HeadBoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RagdollCollisionProfileName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LookAtYawSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LookAtPitchSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LookAtYawThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUseRefPoseHeadLocation: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUseBoneOrientationForCharacterForwardVector: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CharacterForwardBoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EAxis::Type> CharacterForwardBoneForwardAxis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CharacterForwardBoneForwardAxisCoefficient;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USkeletalMesh* CachedSkelMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSoftObjectPath> AnimationsForTopologyBounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRsAnimationTopologyBoundsInfo> AnimationsTopologyBoundsInfos;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsInstigatedAnyDamageEvent OnInstigatedAnyDamage;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsInstigatedZeroDamageEvent OnInstigatedZeroDamage;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsNavStateChangedMulticast OnAnyNavStateChange;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsHitColliderEvent OnRsHitCollided;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsDidProjectileDamageEvent OnRsDidProjectileDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsDamageInfo LastDamageInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CharSyncID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TSet<UPrimitiveComponent*> StaticBlockComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float CinematicBlendInterp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ECollisionEnabled::Type> PreCinematicSkeletalMeshCollisionEnabled;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    URsCombatStateMachine* CombatStateMachine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URsPhysicalAnimationComponent* RsPhysicalAnimationComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float YawTargetAngle;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCanReceiveDamageFromPhysicsCollision: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAttackHit: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bSkipDeathAnimation: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCanBlock: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCanParry: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCanEvade: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCanDoGlancingBlow: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIgnoresKillPlane: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAlwaysDeflectProjectiles: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bForceSlowed: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bPreventCombatSuction: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    uint8 bEnableCharacterPhysicsOnCineEnd: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    uint8 bSkipCinematicBlendInterpReset: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bInexpensiveCharacter: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAllowCheapIk: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bBypassCorpse: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bDisallowAIAttack: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AttackDamageMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* FacialRig;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UAnimMontage> CombatMontage;
    
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ARsCharacter> RidingCharacterPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer InitialAttributeTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    URsCharacterDefinition* CharacterDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URsCharacterDefinition* CharacterDefinition_TempHack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URsHealthComponent* HealthComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsFrameDamageTracker FrameDamageTracker;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    URsHitCountTrackingDefinition* OverrideHitCountTrackingDefinition;
    
public:
    ARsCharacter();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool WasNavState(ERsNavState State) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float UpdateVisualZCatchUpTime(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void UnregisterOnNavStateExited(const FRsNavStateChanged& Delegate, ERsNavState State);
    
    UFUNCTION(BlueprintCallable)
    void UnregisterOnNavStateEntered(const FRsNavStateChanged& Delegate, ERsNavState State);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float TimeSinceFullAwareness(const AActor* OtherActor) const;
    
    UFUNCTION(BlueprintCallable)
    void StopBlockMeterDeplete(bool enable);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StartParryEnemyAttack(ARsCharacter* Attacker, ERsCharacterDefense OriginalDefenseType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StartGenericDefendEnemyAttack(ARsCharacter* Attacker, ERsCharacterDefense MappedDefenseType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StartEvadeEnemyForceAbility(ARsCharacter* Attacker, ERsCharacterDefense OriginalDefenseType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StartEvadeEnemyAttack(ARsCharacter* Attacker, ERsCharacterDefense OriginalDefenseType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StartBlockEnemyAttack(ARsCharacter* Attacker, bool IsStaffAttack, ERsCharacterDefense OriginalDefenseType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ShouldPlayDeathAnimation() const;
    
    UFUNCTION(BlueprintCallable)
    void SetYawTargetAngle(float InYawTargetAngle);
    
    UFUNCTION(BlueprintCallable)
    void SetWeapon(UMeshComponent* InWeapon, int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void SetVisibility(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetupDamageMaterials(const TArray<int32>& ElementIndices, const TArray<UMaterialInterface*>& Materials);
    
    UFUNCTION(BlueprintCallable)
    void SetTotalStaminaAmount(float NewAmount, bool MaintainPct);
    
    UFUNCTION(BlueprintCallable)
    void SetTotalBlockAmount(float NewAmount, bool MaintainPct);
    
    UFUNCTION(BlueprintCallable)
    void SetSkipReaction(bool enable, const TArray<TSubclassOf<UDamageType>>& ExcludedDamageTypes, bool AllowReactionInForceSlow, bool AllowReactionFromBlockBreak, bool AllowReactionFromUnblockable, bool SkipOnParryReactions);
    
    UFUNCTION(BlueprintCallable)
    void SetRidingCharacter(ARsCharacter* Character);
    
    UFUNCTION(BlueprintCallable)
    void SetRechargeStartDelayOnDamage(float NewRechargeDelay);
    
    UFUNCTION(BlueprintCallable)
    void SetRechargeStartDelayBlockBroken(float NewRechargeDelay);
    
    UFUNCTION(BlueprintCallable)
    void SetRechargeStartDelay(float NewRechargeDelay);
    
    UFUNCTION(BlueprintCallable)
    void SetRechargeRate(float NewRechargeRate);
    
    UFUNCTION(BlueprintCallable)
    void SetOverrideReactionDefinition(const URsCharacterReactionDefinition* ReactionDefinition);
    
    UFUNCTION(BlueprintCallable)
    void SetOverrideProjectileAimTargetByOffset(const FVector& Offset);
    
    UFUNCTION(BlueprintCallable)
    void SetOverrideProjectileAimTargetByBone(FName Bone);
    
    UFUNCTION(BlueprintCallable)
    void SetOverrideDefenseDefinition(URsDefenseDefinition* DefenseDefinition);
    
    UFUNCTION(BlueprintCallable)
    void SetOverrideDeathDefinition(const URsCharacterDeathDefinition* DeathDefinition);
    
    UFUNCTION(BlueprintCallable)
    void SetNavState(ERsNavState NewState);
    
    UFUNCTION(BlueprintCallable)
    void SetLookAtTargetComponent(USceneComponent* InLookAtTarget, bool bResetOnReachThreshold, bool bAlsoSetFocusTarget);
    
    UFUNCTION(BlueprintCallable)
    void SetLookAtTarget(AActor* InLookAtTarget, bool bResetOnReachThreshold, bool bAlsoSetFocusTarget);
    
    UFUNCTION(BlueprintCallable)
    void SetLastDamageEffectType(ERsDamageEffectType DamageEffectType);
    
    UFUNCTION(BlueprintCallable)
    void SetLastDamageCauser(AActor* DamageCauser);
    
    UFUNCTION(BlueprintCallable)
    void SetHitPause(float Duration, float AnimRate, ARsCharacter* OtherActor);
    
    UFUNCTION(BlueprintCallable)
    void SetHitImpulseOverrideDurationMultipler(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetHitImpulseOverrideDistanceMultipler(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetHitImpulseMultiplerOverrides(const FRsHitImpulseMulitplier& NewValue);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetHitCountTrackingOverride(URsHitCountTrackingDefinition* OverrideDefinition);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetGodMode(bool bEnable);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetFacialRig(USkeletalMeshComponent* NewFacialRig);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetCustomProjectileReflectionComponents(TArray<UPrimitiveComponent*> ReflectionCollisions);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetCustomization(URsCustomizationPiece* NewPiece);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetContextualEvaded();
    
    UFUNCTION(BlueprintCallable)
    void SetCombatState(TEnumAsByte<ERsCombatState::Type> NewCombatState);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetCinematicBlendInterp(float InterpValue);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetBlockMeterPercentage(float Pct);
    
    UFUNCTION(BlueprintCallable)
    void SetBlockMarkerOverrides(float Min, float Max);
    
    UFUNCTION(BlueprintCallable)
    void SetBlockCountMarker(float Count);
    
    UFUNCTION(BlueprintCallable)
    void SetBlockArcOverrides(float OverrideAngle, ERsBlockArcType Type);
    
    UFUNCTION(BlueprintCallable)
    void SetAttackSwingDirection(ERsAttackSwingDirection Direction);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetAnimAttachCmp(USkeletalMeshComponent* NewRig, TSubclassOf<UAnimInstance> PostAttachAnimBPClass);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool RsShouldTakeDamage(float Damage, const UDamageType* DamageType, AController* EventInstigator, AActor* DamageCauser) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FRsCharacterDamageModifiers RsGetDamageModifiers(float Damage, const FRsDamageParams& DamageParams, const URsDamageType* DamageType, AController* EventInstigator, AActor* DamageCauser) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FRsCharacterBlockDamageModifiers RsGetBlockDamageModifiers(float BlockDeplete, const FRsDamageParams& DamageParams, const URsDamageType* DamageType, AController* EventInstigator, AActor* DamageCauser) const;
    
    UFUNCTION(BlueprintCallable)
    void RotateToDamageCauserDirectional(ERsAttackerDirection InDirection);
    
    UFUNCTION(BlueprintCallable)
    void RotateToDamageCauser();
    
    UFUNCTION(BlueprintCallable)
    void RotateToAlignXY(const FVector& AlignToVector, float RotationOffset);
    
    UFUNCTION(BlueprintCallable)
    void RotateToAlignDirectionalXY(const FVector& AlignToVector, ERsAttackerDirection InDirection);
    
    UFUNCTION(BlueprintCallable)
    void RotateToActorDirectional(AActor* TargetActor, ERsAttackerDirection InDirection);
    
    UFUNCTION(BlueprintCallable)
    void RotateToActor(AActor* TargetActor);
    
    UFUNCTION(BlueprintCallable)
    void RestoreStamina(float Increment);
    
    UFUNCTION(BlueprintCallable)
    void ResetToBestNavState();
    
    UFUNCTION(BlueprintCallable)
    void ResetParry();
    
    UFUNCTION(BlueprintCallable)
    void ResetLookAtTarget(bool bAlsoClearFocusTarget);
    
    UFUNCTION(BlueprintCallable)
    void ResetHitCount();
    
    UFUNCTION(BlueprintCallable)
    void ResetDamageInfo();
    
    UFUNCTION(BlueprintCallable)
    void ResetContextualEvade();
    
    UFUNCTION(BlueprintCallable)
    void ResetBlockCountMarker();
    
    UFUNCTION(BlueprintCallable)
    void ResetBlock();
    
    UFUNCTION(BlueprintCallable)
    void RemoveStaticBlockComponent(UPrimitiveComponent* NewStaticBlockComponent);
    
protected:
    UFUNCTION(BlueprintCallable)
    void RemoveCustomizationFromSlot(TEnumAsByte<ECustomizationSlot::Type> Slot);
    
    UFUNCTION(BlueprintCallable)
    void RemoveCustomization(const URsCustomizationPiece* NewPiece);
    
    UFUNCTION(BlueprintCallable)
    void RemoveAnimAttachCmp(USkeletalMeshComponent* RigToRemove);
    
public:
    UFUNCTION(BlueprintCallable)
    void RegisterOnNavStateExited(const FRsNavStateChanged& Delegate, ERsNavState State);
    
    UFUNCTION(BlueprintCallable)
    void RegisterOnNavStateEntered(const FRsNavStateChanged& Delegate, ERsNavState State);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveInstigatedZeroDamage(const FRsDamageParams& DamageInfo, AActor* OtherActor, AActor* WouldBeDamageCauser);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveInstigatedAnyDamage(float Damage, const FRsDamageParams& DamageInfo, AActor* DamagedActor, AActor* DamageCauser);
    
public:
    UFUNCTION(BlueprintCallable)
    bool PlayReactionAnimation(ERsCharacterReaction ReactionType, ERsAttackSwingDirection AttackSwingDirection);
    
    UFUNCTION(BlueprintCallable)
    UAnimMontage* PlayCharacterAnimation_WithBlendSettings(UAnimationAsset* Asset, const FMontageBlendSettings& BlendInSettings, const FMontageBlendSettings& BlendOutSettings, FName AnimationSlot, bool PlayRandomAnimation, float StartPosition, float Playrate, float BlendOutTriggerTime, FVector2D BlendSpaceInput);
    
    UFUNCTION(BlueprintCallable)
    UAnimMontage* PlayCharacterAnimation(UAnimationAsset* Asset, float BlendInTime, float BlendOutTime, FName AnimationSlot, bool PlayRandomAnimation, float StartPosition, float Playrate, float BlendOutTriggerTime, FVector2D BlendSpaceInput);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FRsReactionParameters OverrideReactionParameters(const FRsReactionParameters& CurrentReactionParameters);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnStartDefendEnemyAttack(ARsCharacter* Attacker, const TSoftClassPtr<URsDamageType>& DamageClass, AActor* DamageCauser);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRevived();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnReturnToNeutral();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnQuicksandNavStateExited(ERsNavState NewState, ERsNavState PrevState);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float OnPreHealthChanged(float OldHealth, float InNewHealth);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnKilledCharacter(ARsCharacter* Victim);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnGroundTopologyChange(const ERsTopologyMode PrevMode, const ERsTopologyMode newMode, const float Proximity);
    
    UFUNCTION(BlueprintCallable)
    void OnDied(AActor* DeathActor);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnCombatContactEvent(ARsCharacter* Attacker);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnBlockBreakOtherActor(const FRsHitEvent& DefendedAttack, ARsCharacter* OtherActor);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnAttackParriedByOtherActor(const FRsHitEvent& DefendedAttack, const FHitResult& HitSweep, ARsCharacter* OtherActor);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnAttackEvadedByOtherActor(const FRsHitEvent& DefendedAttack, const FHitResult& HitSweep, ARsCharacter* OtherActor);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnAttackCounteredByOtherActor(const FRsHitEvent& DefendedAttack, const FHitResult& HitSweep, ARsCharacter* OtherActor);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnAttackBlockedByOtherActor(const FRsHitEvent& DefendedAttack, const FHitResult& HitSweep, ARsCharacter* OtherActor);
    
protected:
    UFUNCTION(BlueprintCallable)
    void K2_TriggerReactionWithData(AActor* Attacker, const FRsReactionDefinitionData& ReactionData, const FRsDirectionAnimationParameters& ReactionParameters, const FRotator& RotateToward, bool AlignToAttacker);
    
    UFUNCTION(BlueprintCallable)
    void K2_TriggerReaction(AActor* Attacker, const FRsReactionParameters& ReactionParameters, const FRotator& RotateToward, bool AlignToAttacker);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_ParriedEnemyAttack(ARsCharacter* Attacker, AActor* DamageCauser, const FRsDamageParams& DamageParams);
    
private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    URsDamageType* K2_GetLastDamageType() const;
    
public:
    UFUNCTION(BlueprintCallable)
    void K2_EnableHitColliderWithDamageType(FName ColliderTag, const URsDamageType* InDamageType);
    
    UFUNCTION(BlueprintCallable)
    void K2_EnableHitCollider(FName ColliderTag, const FRsHitEvent& InHitEvent);
    
    UFUNCTION(BlueprintCallable)
    void K2_DisableHitCollider(FName ColliderTag);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    EDefenseTypes K2_DetermineDefenseType(ARsCharacter* Attacker, const TSoftClassPtr<URsDamageType>& DamageClass);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_CounteredEnemyAttack(ARsCharacter* Attacker, AActor* DamageCauser, const FRsDamageParams& DamageParams);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_BlockedEnemyAttack(ARsCharacter* Attacker, AActor* DamageCauser, const FRsDamageParams& DamageParams);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPastCurrentBlockCountMarker() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNavState(ERsNavState State) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInWater() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInGodeMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInCombatState(TEnumAsByte<ERsCombatState::Type> CombatState) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHostileTo(const AActor* OtherActor) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHeadTrackingPaused() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFullyAwareOf(const AActor* OtherActor) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFriendlyTo(const AActor* OtherActor) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEqualOrPastCurrentBlockCountMarker() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDefenseActive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAlive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool InNonProcessTopologyNavState() const;
    
    UFUNCTION(BlueprintCallable)
    void ImpulsePush(AActor* DamageCauser, float Duration, float Distance);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMeshComponent* GetWeapon(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTotalStaminaAmount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTimeInCurrentNavState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetStaminaPercentage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetStaminaAmount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetSkipReaction() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ARsCharacter* GetRidingCharacter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ERsCharacterReaction GetReactionFromDamageType(TSubclassOf<UDamageType> DmgClass) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ERsNavState GetPreviousValidNavState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ERsNavState GetPreviousNavState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TEnumAsByte<ERsCombatState::Type> GetPrevCombatState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetParryCountStats(int32& MaxParryCount, int32& CurrentParryCount) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    URsOffenseComponent* GetOffenseComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    USkeletalMeshComponent* GetMeshForLightsaberMarks() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GetLightSabersActors(TArray<AActor*>& OutLightSabers);
    
    UFUNCTION(BlueprintCallable)
    void GetLastNavmesh(bool& IsOnNav, float& TimeSince, FVector& NearestLocation, int32& NavRef);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ERsCharacterDefense GetLastDefendType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ERsAttackSwingDirection GetLastDamageSwingDirection() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AController* GetLastDamageInstigator() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRsHitEvent GetLastDamageHitEvent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetLastDamageCauser() const;
    
    UFUNCTION(BlueprintCallable)
    ARsCharacter* GetInfoForAttackToDefend(ERsAttackSwingDirection& AttackerSwingDirection);
    
    UFUNCTION(BlueprintCallable)
    FRsHitImpulseMulitplier GetHitImpulseMultiplerOverrides(bool& HasOverride);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetHitCountStats(float& MaxHitCount, float& CurrentCount, float& InverseHitCount) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    URsHealthComponent* GetHealthComponent() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    USkeletalMeshComponent* GetHairMeshBP();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USkeletalMeshComponent* GetFacialRig() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ERsAttackSwingDirection GetDefendSwingDirection();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ARsCharacter* GetDefendAttacker();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ERsNavState GetCurrentNavState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentHitCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCurrentCinematicRootVelocity(FVector& OutVelocity) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TEnumAsByte<ERsCombatState::Type> GetCombatState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    URsCharacterDefinition* GetCharacterDefinition() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetBlockMeterStats(float& TotalBlockMeter, float& CurrentBlockMeterAmount, float& DepletedAmount) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBlockMeterPercentage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBlockMarker() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetBlockCountStats(int32& MaxBlockCount, int32& CurrentBlockCount, int32& InverseBlockCount) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ERsCharacterDefense GetAttackVictimDefendType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ERsAttackSwingDirection GetAttackSwingDirection() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetAttackingTarget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool FindHeadBoneUpVector(FVector& OutUpVector) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool FindHeadBoneLocation(FVector& OutLocation) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool FindHeadBoneForwardVector(FVector& OutForwardVector) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector FindCharacterForwardVector();
    
    UFUNCTION(BlueprintCallable)
    void EnableAllDamageMaterials(float Opacity, float EmissiveIntensity);
    
    UFUNCTION(BlueprintCallable)
    void DropWeapon(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void Dismember(TArray<FDismembermentConfiguration> configs, bool MasterPoseComponentMode);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    ERsCharacterDefense DetermineDefenseTypeLegacy(ARsCharacter* Attacker, ERsCharacterDefense DefendType);
    
    UFUNCTION(BlueprintCallable)
    void DecreaseBlockMeter(float Increment);
    
private:
    UFUNCTION(BlueprintCallable)
    void DeathMontageEnded(UAnimMontage* Montage, bool interrupted);
    
public:
    UFUNCTION(BlueprintCallable)
    void CloseDefenseWindow();
    
    UFUNCTION(BlueprintCallable)
    void ClearOverrideProjectileAimTarget();
    
    UFUNCTION(BlueprintCallable)
    void ClearHitImpulseMultiplierOverride();
    
protected:
    UFUNCTION(BlueprintCallable)
    void ClearHitCountTrackingOverride();
    
public:
    UFUNCTION(BlueprintCallable)
    void ClearCustomProjectileReflectionComponents();
    
    UFUNCTION(BlueprintCallable)
    void ClearCurrentCombatState();
    
    UFUNCTION(BlueprintCallable)
    void ClearCombatState(TSubclassOf<URsCombatState> StateType, bool bRequireExactMatch);
    
    UFUNCTION(BlueprintCallable)
    void ClearBlockArcOverrides(ERsBlockArcType Type);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanTakeDamageFromKillPlane() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanEverBlock() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanDoContextualEvade() const;
    
    UFUNCTION(BlueprintCallable)
    void CancelFullBodyMontages(float BlendOutTime);
    
    UFUNCTION(BlueprintCallable)
    void CancelAllMontages(float BlendOutTime);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ApplyMaterialSwatchByName(FName Name, TEnumAsByte<ECustomizationSlot::Type> Slot);
    
    UFUNCTION(BlueprintCallable)
    void ApplyMaterialSwatchByIndex(int32 SwatchIndex, TEnumAsByte<ECustomizationSlot::Type> Slot);
    
public:
    UFUNCTION(BlueprintCallable)
    void AddStaticBlockComponent(UPrimitiveComponent* NewStaticBlockComponent);
    
    UFUNCTION(BlueprintCallable)
    void AddPhysicalAnimationTickDependency(USkeletalMeshComponent* NewDependent, bool ForceAlwaysDependOnPhysicalAnimation);
    
};

