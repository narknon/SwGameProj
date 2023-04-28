#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Rs/RsDynamicDeformationSampleResult.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "ERsHeroBufferFlags.h"
#include "ERsHeroCollisionTweaks.h"
#include "ERsHeroInputFlags.h"
#include "ERsHeroLoadoutFlags.h"
#include "ERsHeroMotionTweaks.h"
#include "ERsHeroUpgradeFlags.h"
#include "FRsPhysicalAnimationBlendingCustomController.h"
#include "RsActionBufferDelegateDelegate.h"
#include "RsBitfield_HeroBufferFlags.h"
#include "RsBitfield_HeroInputFlags.h"
#include "RsBitfield_HeroLoadoutFlags.h"
#include "RsBitfield_HeroUpgradeFlags.h"
#include "RsCharacter.h"
#include "RsHeroStateModifierDelegateDelegate.h"
#include "RsHeroStateModifierInstance.h"
#include "RsInputActionMulticastDelegateDelegate.h"
#include "RsOnHeroLoadoutChangedDelegate.h"
#include "RsOnHeroUpgradeChangedDelegate.h"
#include "RsOnInputActionSetChangedDelegate.h"
#include "RsHero.generated.h"

class AActor;
class UObject;
class URsCombatState;
class URsHeroFlagSetDefinition;
class URsHeroStateDefinition;
class URsHeroStateModifierDefinition;
class URsInputActionDefinition;
class URsInputActionSetDefinition;
class URsPhysicalAnimationHeroGroundNavProfile;
class URsPhysicalAnimationProfile;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class ARsHero : public ARsCharacter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsInputActionMulticastDelegate OnInputAction;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsOnHeroLoadoutChanged OnHeroLoadoutChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsOnHeroUpgradeChanged OnHeroUpgradeChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsOnInputActionSetChanged OnInputActionSetChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URsHeroStateDefinition* HeroStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URsInputActionSetDefinition* DefaultActionSet;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<TWeakObjectPtr<USkeletalMeshComponent>, URsCombatState*> SkelCmpToCombatStateMap;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URsPhysicalAnimationHeroGroundNavProfile* PhysicalAnimationHeroGroundNavProfile;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URsPhysicalAnimationProfile* PhysicalAnimationProfileHeroTurnings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URsPhysicalAnimationProfile* PhysicalAnimationProfileHeroStarts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URsPhysicalAnimationProfile* PhysicalAnimationProfileHeroStops;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<ERsHeroMotionTweaks, FName> MotionTweakMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<ERsHeroCollisionTweaks, FName> CollisionTweakMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FRsHeroStateModifierInstance> ModifierInstances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FRsHeroStateModifierInstance> AppliedModifierInstances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FRsHeroStateModifierInstance, FTimerHandle> TimedModifierTimerHandles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    URsHeroFlagSetDefinition* FlagSetDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    URsInputActionSetDefinition* ActiveActionSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<URsInputActionDefinition*> ActiveCompositeActions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    URsInputActionSetDefinition* PendingActiveActionSet;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SlideSlopeInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector SlideSlopeYawVec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SlideSlopeRelativeSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisallowPhysicalAnimationDuringGroundNavigation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableTimeDilation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* SoftTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSoftTargetLocked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* ZTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARsCharacter* ParriedTarget;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableWindDeformationQuerying;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WindDeformationSmoothingDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bWaitingForWindDeformationResults;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector CurrentWindDeformationDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector TargetWindDeformationDirection;
    
public:
    ARsHero();
    UFUNCTION(BlueprintCallable)
    void UnregisterOnActionUnbuffered(const FRsActionBufferDelegate& Delegate, FName ActionName);
    
    UFUNCTION(BlueprintCallable)
    void UnregisterOnActionBuffered(const FRsActionBufferDelegate& Delegate, FName ActionName);
    
    UFUNCTION(BlueprintCallable)
    void UnmarkPlayingAsCere();
    
    UFUNCTION(BlueprintCallable)
    void SlideNavStop();
    
    UFUNCTION(BlueprintCallable)
    bool SlideNav();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldSlideNav() const;
    
    UFUNCTION(BlueprintCallable)
    void SetSoftTargetLocked(bool bIsLocked);
    
    UFUNCTION(BlueprintCallable)
    void SetSoftTarget(AActor* Target);
    
    UFUNCTION(BlueprintCallable)
    void SetParriedTarget(ARsCharacter* Target, float ValidDuration);
    
    UFUNCTION(BlueprintCallable)
    void SetOverrideActionSet(URsInputActionSetDefinition* OverrideActionSet);
    
    UFUNCTION(BlueprintCallable)
    void ResetToDefaultActionSet();
    
    UFUNCTION(BlueprintCallable)
    void ResetSpecificBufferedAction(FName ActionName);
    
    UFUNCTION(BlueprintCallable)
    void ResetInputFlags();
    
    UFUNCTION(BlueprintCallable)
    void ResetBufferFlags();
    
    UFUNCTION(BlueprintCallable)
    void ResetBufferedAction();
    
    UFUNCTION(BlueprintCallable)
    void ResetAllState();
    
    UFUNCTION(BlueprintCallable)
    void RemoveToggleHoldAction(const TSet<FName>& ActionNames);
    
    UFUNCTION(BlueprintCallable)
    void RemoveHeroUpgradeTag(FGameplayTag Tag);
    
    UFUNCTION(BlueprintCallable)
    void RemoveHeroUpgradeFlag_DEPRECATED(ERsHeroUpgradeFlags Flags);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveHeroStateModifier(UObject* InstanceOwner, URsHeroStateModifierDefinition* Modifier, float BlendTime);
    
    UFUNCTION(BlueprintCallable)
    void RemoveHeroLoadoutFlag(ERsHeroLoadoutFlags Flags, bool bOnlyIfItDoesntAffectWorldState);
    
    UFUNCTION(BlueprintCallable)
    void RemoveAllLoadoutFlagsThatDontAffectWorldState();
    
    UFUNCTION(BlueprintCallable)
    void RegisterOnActionUnbuffered(const FRsActionBufferDelegate& Delegate, FName ActionName);
    
    UFUNCTION(BlueprintCallable)
    void RegisterOnActionBuffered(const FRsActionBufferDelegate& Delegate, FName ActionName);
    
    UFUNCTION(BlueprintCallable)
    void PushHeroInputFlags(const FName Name, const FRsBitfield_HeroInputFlags SetFlags, const FRsBitfield_HeroInputFlags ClearFlags, const FRsBitfield_HeroInputFlags InvalidFlags, const FRsBitfield_HeroInputFlags ClearInvalidFlags);
    
private:
    UFUNCTION(BlueprintCallable)
    static void PopulateActionNameList(UObject* ContextObject, TArray<FName>& Options);
    
public:
    UFUNCTION(BlueprintCallable)
    void PopHeroInputFlags(const FName Name);
    
private:
    UFUNCTION(BlueprintCallable)
    void PhysicalAnimationBlendingCustomControllerFactorChanged(FRsPhysicalAnimationBlendingCustomController blendingCustomController, float previousBlendValue, float newBlendValue);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnDeformationSamplingReady(const FRsDynamicDeformationSampleResult& Result);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnActionReleased(FName ActionName);
    
    UFUNCTION(BlueprintCallable)
    void OnActionPressed(FName ActionName);
    
public:
    UFUNCTION(BlueprintCallable)
    void MarkPlayingAsCere();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool LastActionReleasedWithinTime(FName ActionName, float Duration) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool LastActionPressedWithinTime(FName ActionName, float Duration) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMarkedPlayingAsCere() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInputPressed(FName ActionName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsExecutingBufferedAction() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsExecutingActions() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActionBuffered(FName ActionName, bool bIncludeBufferedRelease) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasHeroUpgradeTags(FGameplayTagContainer TagsToCheck) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasHeroUpgradeTag(FGameplayTag Tag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasHeroUpgradeFlags_DEPRECATED(FRsBitfield_HeroUpgradeFlags Flags) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasHeroUpgradeFlag_DEPRECATED(ERsHeroUpgradeFlags flag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasHeroLoadoutFlags(FRsBitfield_HeroLoadoutFlags Flags) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasHeroLoadoutFlag(ERsHeroLoadoutFlags flag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasHeroInputFlags(FRsBitfield_HeroInputFlags Flags) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasHeroInputFlag(ERsHeroInputFlags flag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasHeroBufferFlags(FRsBitfield_HeroBufferFlags Flags) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasHeroBufferFlag(ERsHeroBufferFlags flag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasBufferedAction(bool bIncludeBufferedRelease) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetMotionTweaksNameFromEnum(ERsHeroMotionTweaks motionEnum);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetLastActionReleasedTime(FName ActionName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetLastActionPressTime(FName ActionName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USkeletalMeshComponent* GetCameraRig() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetActionBufferTime(FName ActionName) const;
    
    UFUNCTION(BlueprintCallable)
    void ForceReleaseInput(FName ActionName);
    
    UFUNCTION(BlueprintCallable)
    void ForceExecuteBuffer(FName ActionName);
    
    UFUNCTION(BlueprintCallable)
    void ForceBufferAction(FName ActionName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DoesHeroLoadoutFlagAffectWorldState(ERsHeroLoadoutFlags flag) const;
    
    UFUNCTION(BlueprintCallable)
    void DetermineSoftLockTarget(float MaxDistance, float MaxAngle);
    
    UFUNCTION(BlueprintCallable)
    void DeferResetInputActionState();
    
    UFUNCTION(BlueprintCallable)
    void DebugSetHeroUpgradeTags(FGameplayTagContainer TagsToSet);
    
    UFUNCTION(BlueprintCallable)
    void DebugSetHeroUpgradeFlags_DEPRECATED(FRsBitfield_HeroUpgradeFlags Flags);
    
    UFUNCTION(BlueprintCallable)
    void DebugSetHeroLoadoutFlags(FRsBitfield_HeroLoadoutFlags Flags);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString DebugGetHeroUpgradeTagsText() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DebugGetHeroStateModifiers(FString& HeroModifiers) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString DebugGetHeroLoadoutFlagsText() const;
    
    UFUNCTION(BlueprintCallable)
    void DeactivateCombatSuction();
    
    UFUNCTION(BlueprintCallable)
    void ClearSoftTarget();
    
    UFUNCTION(BlueprintCallable)
    void AddToggleHoldAction(const TSet<FName>& ActionNames);
    
    UFUNCTION(BlueprintCallable)
    void AddHeroUpgradeTag(FGameplayTag Tag);
    
    UFUNCTION(BlueprintCallable)
    void AddHeroUpgradeFlag_DEPRECATED(ERsHeroUpgradeFlags flag);
    
    UFUNCTION(BlueprintCallable)
    bool AddHeroStateModifierForDuration(UObject* InstanceOwner, URsHeroStateModifierDefinition* Modifier, const FRsHeroStateModifierDelegate& OnRemovedCallback, float Duration, float BlendInTime, float BlendOutTime);
    
    UFUNCTION(BlueprintCallable)
    bool AddHeroStateModifier(UObject* InstanceOwner, URsHeroStateModifierDefinition* Modifier, const FRsHeroStateModifierDelegate& OnRemovedCallback, float BlendTime);
    
    UFUNCTION(BlueprintCallable)
    void AddHeroLoadoutFlag(ERsHeroLoadoutFlags flag, bool bAffectsWorldState);
    
    UFUNCTION(BlueprintCallable)
    void AddAllHeroUpgradeTags(FGameplayTagContainer TagsToAdd, bool bResetIfDieWithoutSaving);
    
    UFUNCTION(BlueprintCallable)
    void AddAllHeroUpgradeFlags_DEPRECATED(FRsBitfield_HeroUpgradeFlags Flags, bool bSaveImmediately);
    
    UFUNCTION(BlueprintCallable)
    void AddAllHeroLoadoutFlags(FRsBitfield_HeroLoadoutFlags Flags, bool bSaveImmediately, bool bAffectsWorldState);
    
    UFUNCTION(BlueprintCallable)
    bool ActivateCombatSuction(AActor* SuctionTarget, float TimeToTarget, float Offset, float MaxRange, bool bUseOverrideMultipler, const float OverrideMultiplier);
    
};

