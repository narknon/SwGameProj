#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RsCharacterAnimationData.h"
#include "RsDamageParams.h"
#include "RsSoftStateObject.h"
#include "RsCombatState.generated.h"

class AActor;
class AController;
class ARsCharacter;
class UAnimMontage;
class UAnimationAsset;
class UDamageType;
class UObject;
class URsDamageType;
class URsSlaveSyncInstance;
class URsSyncDefinition;
class URsSyncInstance;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class URsCombatState : public URsSoftStateObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsCharacterAnimationData InstancedAnimData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URsSyncDefinition* ActiveSyncDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* OverrideSkelMeshComponent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasTakeDamageImplementation;
    
public:
    URsCombatState();
    UFUNCTION(BlueprintCallable)
    void SetStopAnimOnAbort(bool StopAnimOnAbort);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool RsShouldTakeDamage(ARsCharacter* DamageTaker, float Damage, const UDamageType* DamageType, AController* EventInstigator, AActor* DamageCauser) const;
    
private:
    UFUNCTION(BlueprintCallable)
    void PopulateActionNameList(UObject* ContextObject, TArray<FName>& Options) const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OverrideSyncData(ARsCharacter* TheAttacker, URsSyncDefinition* CurrentSyncDefinition, AActor* CurrentMaster, const TArray<AActor*>& CurrentSlaves, URsSyncDefinition*& NewSyncDefinition, AActor*& NewMaster, TArray<AActor*>& NewSlaves);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OverrideAnimationData(ARsCharacter* TheAttacker, const FRsCharacterAnimationData& CurrentAnimationData, FRsCharacterAnimationData& NewAnimationData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTakeDamage(ARsCharacter* TheDefender, float Damage, const FRsDamageParams& DamageInfo, AController* InstigatedBy, AActor* DamageCauser);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnActionAnimationEnded(ARsCharacter* ActionOwner);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsAttackBlockable(const ARsCharacter* TheDefender, const URsDamageType* IncomingDamageType, const FRsDamageParams& DamageInfo, const ARsCharacter* AttackingCharacter, const AActor* DamageCauser) const;
    
    UFUNCTION(BlueprintCallable)
    void CompleteThisActionButContinueAnimation();
    
    UFUNCTION(BlueprintCallable)
    void CompleteThisAction();
    
    UFUNCTION(BlueprintCallable)
    void ChainToSyncAnimation(URsSyncDefinition* SyncDefinition, const TArray<AActor*>& Slaves, UAnimationAsset* OverrideAnimation, int32& NewSyncGroupdID, URsSyncInstance*& MasterInstance, TArray<URsSlaveSyncInstance*>& SlaveInstanceArray, const FVector2D& MasterBlendSpaceInput, const TArray<FVector2D>& SlaveBlendSpaceinputs);
    
    UFUNCTION(BlueprintCallable)
    UAnimMontage* ChainAnimation(const FRsCharacterAnimationData& InAnimData);
    
    UFUNCTION(BlueprintCallable)
    void CancelThisActionButContinueAnimation();
    
    UFUNCTION(BlueprintCallable)
    void CancelThisAction();
    
};

