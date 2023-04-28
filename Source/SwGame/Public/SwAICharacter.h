#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "EDefenseTypes.h"
#include "ERsCharacterDefense.h"
#include "ERsCombatState.h"
#include "RsAICharacter.h"
#include "RsCharacterAnimationData.h"
#include "RsDirectionAnimationParameters.h"
#include "K2OnAttackEndedDelegateDelegate.h"
#include "SwDefenseParameters.h"
#include "SwAICharacter.generated.h"

class ARsCharacter;
class ASwProjectile;
class UAnimSequenceBase;
class URsDamageType;
class URsDirectionAnimDataAsset;
class URsSyncDefinition;
class USkeletalMeshComponent;
class USwAttackState;
class USwDefenseState;
class USwReactionState;

UCLASS(Abstract, Blueprintable, NotPlaceable)
class SWGAME_API ASwAICharacter : public ARsAICharacter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AttackRowName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> HeroBlasterTargetingBones;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<URsSyncDefinition*> SyncList_DFX_GroundFront;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<URsSyncDefinition*> SyncList_DFX_GroundBack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<URsSyncDefinition*> SyncList_DFX_Backstab;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<URsSyncDefinition*> SyncList_DFX_AirFront;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<URsSyncDefinition*> SyncList_DFX_AirBack;
    
public:
    ASwAICharacter();
    UFUNCTION(BlueprintCallable)
    void SetFightActiveIterations(int32 NewValue);
    
    UFUNCTION(BlueprintCallable)
    void ResetFightActiveIterations();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnShotProjectileReflected(ASwProjectile* Projectile, ARsCharacter* ReflectionInstigator);
    
    UFUNCTION(BlueprintCallable)
    void K2_ReactionParried(const FHitResult& HitSweep, FName AttackType, UAnimSequenceBase* ParryReactionOverride);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUsingPatrolPath() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInConversation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsAITargeted();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetFightActiveIterations() const;
    
    UFUNCTION(BlueprintCallable)
    FName GetCurrentAttackRow();
    
    UFUNCTION(BlueprintCallable)
    void GetCurrentAttackAndUnBindToEnd(const FK2OnAttackEndedDelegate& Event);
    
    UFUNCTION(BlueprintCallable)
    bool GetCurrentAttackAndBindToEnd(const FK2OnAttackEndedDelegate& Event);
    
    UFUNCTION(BlueprintCallable)
    void AIReaction(const FRsCharacterAnimationData& AnimData, USwReactionState* DescriptionTemplate);
    
    UFUNCTION(BlueprintCallable)
    void AIDefendFromDefenseTypeContact(EDefenseTypes DefenseType, const FRsDirectionAnimationParameters& DefenseParameters, bool bForceNewState);
    
    UFUNCTION(BlueprintCallable)
    void AIDefendFromDefenseType(EDefenseTypes DefenseType, const FRsDirectionAnimationParameters& DefenseParameters);
    
    UFUNCTION(BlueprintCallable)
    void AIDefendFromDefenseParameters(const FSwDefenseParameters& DefenseParameters);
    
    UFUNCTION(BlueprintCallable)
    void AIDefendFromData(const URsDirectionAnimDataAsset* DefenseData, const FRsDirectionAnimationParameters& DefenseParameters, const USwDefenseState* DefenseTemplate);
    
    UFUNCTION(BlueprintCallable)
    void AIDefendFromAttackTypeContact(const TSoftClassPtr<URsDamageType>& AttackType, const FRsDirectionAnimationParameters& DefenseParameters, bool bForceNewState);
    
    UFUNCTION(BlueprintCallable)
    void AIDefendFromAttackType(const TSoftClassPtr<URsDamageType>& AttackType, const FRsDirectionAnimationParameters& DefenseParameters);
    
    UFUNCTION(BlueprintCallable)
    void AIDefendForDefenseType(ARsCharacter* Attacker, ERsCharacterDefense DefenseType);
    
    UFUNCTION(BlueprintCallable)
    void AIDefend(const FRsCharacterAnimationData& AnimData, USwDefenseState* DescriptionTemplate, TEnumAsByte<ERsCombatState::Type> CombatDefenseType, USkeletalMeshComponent* OverrideSkelCmp);
    
    UFUNCTION(BlueprintCallable)
    void AIAttackSync(USwAttackState* DescriptionTemplate, URsSyncDefinition* SyncDef, bool bSwapMasterSlave);
    
    UFUNCTION(BlueprintCallable)
    void AIAttack(const FRsCharacterAnimationData& AnimData, USwAttackState* DescriptionTemplate, USkeletalMeshComponent* OverrideSkelCmp);
    
};

