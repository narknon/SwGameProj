#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EDefenseTypes.h"
#include "ERsNavState.h"
#include "RsCharacterAnimationData.h"
#include "RsDirectionAnimationParameters.h"
#include "RsHero.h"
#include "K2OnAttackEndedDelegateDelegate.h"
#include "MountingDelegateDelegate.h"
#include "SwDefenseParameters.h"
#include "Templates/SubclassOf.h"
#include "SwHero.generated.h"

class AActor;
class APawn;
class ASwAIBuddyDroid;
class URsDamageType;
class URsDirectionAnimDataAsset;
class URsSyncDefinition;
class USkeletalMeshComponent;
class USwAttackState;
class USwButtonMashComponent;
class USwDefenseState;
class USwHeroFoliageDestructionManager;
class USwReactionState;
class USwSaberClashComponent;
class USwTargetingProfile;

UCLASS(Blueprintable)
class ASwHero : public ARsHero {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMountingDelegate HeroMountedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMountingDelegate HeroDismountedEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ConsecutiveProjectileDamageProtectionTime;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USwHeroFoliageDestructionManager* FoliageDestructionManager;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* CameraRig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USwButtonMashComponent* ButtonMashComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USwSaberClashComponent* SaberClashComponent;
    
public:
    ASwHero();
    UFUNCTION(BlueprintCallable)
    void PlayerReaction(const FRsCharacterAnimationData& AnimData, USwReactionState* DescriptionTemplate);
    
    UFUNCTION(BlueprintCallable)
    void PlayerDefendFromDefenseType(EDefenseTypes DefenseType, const FRsDirectionAnimationParameters& DefenseParameters, USkeletalMeshComponent* OverrideMeshComponent);
    
    UFUNCTION(BlueprintCallable)
    void PlayerDefendFromDefenseParameters(const FSwDefenseParameters& DefenseParameters, USkeletalMeshComponent* OverrideMeshComponent);
    
    UFUNCTION(BlueprintCallable)
    void PlayerDefendFromData(const URsDirectionAnimDataAsset* DefenseData, const FRsDirectionAnimationParameters& DefenseParameters, const USwDefenseState* DefenseTemplate, USkeletalMeshComponent* OverrideMeshComponent);
    
    UFUNCTION(BlueprintCallable)
    void PlayerDefendFromContactDefenseParameters(EDefenseTypes DefenseType, const FSwDefenseParameters& DefenseParameters, bool bForceNewState);
    
    UFUNCTION(BlueprintCallable)
    void PlayerDefendFromAttackTypeContact(const TSoftClassPtr<URsDamageType>& AttackType, const FRsDirectionAnimationParameters& DefenseParameters, bool bForceNewState);
    
    UFUNCTION(BlueprintCallable)
    void PlayerDefendFromAttackType(const TSoftClassPtr<URsDamageType>& AttackType, const FRsDirectionAnimationParameters& DefenseParameters, USkeletalMeshComponent* OverrideMeshComponent);
    
    UFUNCTION(BlueprintCallable)
    void PlayerDefend(const FRsCharacterAnimationData& AnimData, TSubclassOf<USwDefenseState> DescriptionOverride, USkeletalMeshComponent* OverrideMeshComponent);
    
    UFUNCTION(BlueprintCallable)
    void PlayerAttackSync(TSubclassOf<USwAttackState> DescriptionOverride, URsSyncDefinition* SyncDef, bool bSwapMasterSlave);
    
    UFUNCTION(BlueprintCallable)
    void PlayerAttack(const FRsCharacterAnimationData& AnimData, TSubclassOf<USwAttackState> DescriptionOverride, USkeletalMeshComponent* OverrideMeshComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnHeroMounted(APawn* Mount);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnHeroDismounted(APawn* Mount);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnExitMeditationNavState(ERsNavState NewState, ERsNavState PrevState);
    
    UFUNCTION(BlueprintCallable)
    void OnEnterMeditationNavState(ERsNavState NewState, ERsNavState PrevState);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAnyProjectileDamageProtection() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USwSaberClashComponent* GetSaberClashComponent() const;
    
    UFUNCTION(BlueprintCallable)
    void GetCurrentAttackAndUnBindToEnd(const FK2OnAttackEndedDelegate& Event);
    
    UFUNCTION(BlueprintCallable)
    bool GetCurrentAttackAndBindToEnd(const FK2OnAttackEndedDelegate& Event);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    ASwAIBuddyDroid* GetBuddyDroidActor();
    
    UFUNCTION(BlueprintCallable)
    void DetermineSoftLockTargetFromProfilePOV(USwTargetingProfile* profile, const FVector& SearchLocation, const FVector& searchDirection, const TArray<AActor*>& ignoreTargets, bool bForceSearch);
    
    UFUNCTION(BlueprintCallable)
    void DetermineSoftLockTargetFromProfile(USwTargetingProfile* profile, const TArray<AActor*>& ignoreTargets, bool bForceSearch);
    
    UFUNCTION(BlueprintCallable)
    void DeactiveForceMissingOnIncomingProjectiles();
    
    UFUNCTION(BlueprintCallable)
    void BroadcastHeroMounted(APawn* Mount);
    
    UFUNCTION(BlueprintCallable)
    void BroadcastHeroDismounted(APawn* Mount);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AutoActivateZTargeting(AActor* AutoTarget);
    
    UFUNCTION(BlueprintCallable)
    void ActiveForceMissingOnIncomingProjectiles(float ChanceToMiss);
    
};

