#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "ERsCombatDefenseSuccessType.h"
#include "RsCharacterAnimationData.h"
#include "RsCombatState.h"
#include "RsDamageParams.h"
#include "ESwAbilityUpgradeLevel.h"
#include "Templates/SubclassOf.h"
#include "SwAttackState.generated.h"

class AActor;
class ARsCharacter;
class UAnimMontage;
class UAnimationAsset;
class URsAbility;

UCLASS(Blueprintable, EditInlineNew)
class SWGAME_API USwAttackState : public URsCombatState {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasTickImplemetation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasShouldChainAttackImplementation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AActor*> RegisteredDamageCausers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> Colliders;
    
public:
    USwAttackState();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TickAttack(ARsCharacter* TheAttacker, float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ShouldChainAttackAnimation(ARsCharacter* TheAttacker, FRsCharacterAnimationData& NextAnimation, TSubclassOf<URsAbility>& AbilityType);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ShouldAutoAdjustCameraOnAttackHit() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ShouldAutoAdjustCameraOnAttackBegin() const;
    
    UFUNCTION(BlueprintCallable)
    void RegisterDamageCauser(AActor* NewDamageCauser);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEndAttack(ARsCharacter* TheAttacker);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDealtAnyDamage(ARsCharacter* TheAttacker, float Damage, const FRsDamageParams& DamageInfo, AActor* DamagedActor, AActor* DamageCauser);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnConnectedButDealtNoDamage(ARsCharacter* TheAttacker, const FRsDamageParams& DamageInfo, AActor* OtherActor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBeginAttack(ARsCharacter* TheAttacker);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAttackDefended(ARsCharacter* TheAttacker, ARsCharacter* TheDefender, ERsCombatDefenseSuccessType DefenseType, const FHitResult& HitSweep);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAttackCompleted(ARsCharacter* TheAttacker);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAttackAborted(ARsCharacter* TheAttacker);
    
public:
    UFUNCTION(BlueprintCallable)
    void ChainForceAbilityPreTrigger(TSubclassOf<URsAbility> ForceAbilityType, TEnumAsByte<ESwAbilityUpgradeLevel::Type> UpgradeLevel, const UAnimationAsset* OverrideAnimation);
    
    UFUNCTION(BlueprintCallable)
    void ChainForceAbility(TSubclassOf<URsAbility> ForceAbilityType, UAnimationAsset* AnimationOverride);
    
protected:
    UFUNCTION(BlueprintCallable)
    UAnimMontage* ChainAnimationOrAbility(const FRsCharacterAnimationData& InAnimData, const TSubclassOf<URsAbility>& AbilityType);
    
};

