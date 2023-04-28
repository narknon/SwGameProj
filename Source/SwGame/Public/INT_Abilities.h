/*
#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UObject/NoExportTypes.h"
#include "ERsAbilityState.h"
#include "ESwAbilityUpgradeLevel.h"
#include "ESwForcePushHitType.h"
#include "SwLiftSlamAnalogTargetData.h"
#include "INT_Abilities.generated.h"

class AActor;

UINTERFACE(Blueprintable)
class SWGAME_API UINT_Abilities : public UInterface {
    GENERATED_BODY()
};

class SWGAME_API IINT_Abilities : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPreForcePushApplied(AActor* Instigator);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPreForcePullApplied(AActor* Instigator);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnForceTelekinesisStart(AActor* Instigator, const ERsAbilityState AbilityStateTransitionedFrom, const TEnumAsByte<ESwAbilityUpgradeLevel::Type> AbilityLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnForceTelekinesisOverriden(AActor* Instigator, const ERsAbilityState AbilityStateTransitionedFrom, const TEnumAsByte<ESwAbilityUpgradeLevel::Type> AbilityLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnForceTelekinesisEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnForceTargetStart(AActor* ForceAbilityInstigator);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnForceTargetEnd(AActor* ForceAbilityInstigator);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnForceSlowStart(AActor* Instigator, const float Duration, const float TimeDilation, const ERsAbilityState AbilityStateTransitionedFrom, const TEnumAsByte<ESwAbilityUpgradeLevel::Type> AbilityLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnForceSlowRenewed(AActor* Instigator, const float Duration, const float TimeDilation, const TEnumAsByte<ESwAbilityUpgradeLevel::Type> AbilityLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnForceSlowOverriden(AActor* Instigator, const ERsAbilityState AbilityStateTransitionedFrom, const TEnumAsByte<ESwAbilityUpgradeLevel::Type> AbilityLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnForceSlowEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnForceSlamStruggleStartOverriden(AActor* Instigator, const TEnumAsByte<ESwAbilityUpgradeLevel::Type> AbilityLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnForceSlamStruggleStart(AActor* Instigator, const TEnumAsByte<ESwAbilityUpgradeLevel::Type> AbilityLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnForceSlamStruggleEndOverriden(AActor* Instigator, const TEnumAsByte<ESwAbilityUpgradeLevel::Type> AbilityLevel, bool bHasSucceeded);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnForceSlamStruggleEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnForceSlamStart(AActor* Instigator, const TEnumAsByte<ESwAbilityUpgradeLevel::Type> AbilityLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnForceSlamStagger(AActor* Instigator, const TEnumAsByte<ESwAbilityUpgradeLevel::Type> AbilityLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnForceSlamOverriden(AActor* Instigator, const TEnumAsByte<ESwAbilityUpgradeLevel::Type> AbilityLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnForceSlamImpact(AActor* Instigator, const TEnumAsByte<ESwAbilityUpgradeLevel::Type> AbilityLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnForceSlamGetup(AActor* Instigator, const TEnumAsByte<ESwAbilityUpgradeLevel::Type> AbilityLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnForceSlamFlooredStart(AActor* Instigator, const TEnumAsByte<ESwAbilityUpgradeLevel::Type> AbilityLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnForceSlamFlooredEnd(AActor* Instigator, const TEnumAsByte<ESwAbilityUpgradeLevel::Type> AbilityLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnForceSlamEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnForceRetractStart(AActor* Instigator, const TEnumAsByte<ESwAbilityUpgradeLevel::Type> AbilityLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnForceRetractEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnForcePushStart(AActor* Instigator, const FVector& PushVector, const ESwForcePushHitType PushHitType, const FVector& OriginalDirection, const ERsAbilityState AbilityStateTransitionedFrom, const TEnumAsByte<ESwAbilityUpgradeLevel::Type> AbilityLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnForcePushOverriden(AActor* Instigator, const ERsAbilityState AbilityStateTransitionedFrom, const TEnumAsByte<ESwAbilityUpgradeLevel::Type> AbilityLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnForcePushLeftGround(AActor* Instigator);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnForcePushLand(AActor* Instigator);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnForcePushHitGround(AActor* Instigator);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnForcePushEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnForcePullStart(AActor* Instigator, const float PullDuration, const FVector& OriginalPullDirection, const ERsAbilityState AbilityStateTransitionedFrom, const TEnumAsByte<ESwAbilityUpgradeLevel::Type> AbilityLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnForcePullOverriden(AActor* Instigator, const ERsAbilityState AbilityStateTransitionedFrom, const TEnumAsByte<ESwAbilityUpgradeLevel::Type> AbilityLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnForcePullEnterHold();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnForcePullEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnForcePullDoubleSlamBegin(AActor* OtherCollidedActor, bool bIsLeft);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnForcePullDoubleSlam(AActor* OtherActor, float Damage, bool bIsLeft);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    AActor* OnForcePullAttachment(AActor* ForceAbilityInstigator);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnForceLiftStruggleStartOverriden(AActor* Instigator, const TEnumAsByte<ESwAbilityUpgradeLevel::Type> AbilityLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnForceLiftStruggleStart(AActor* Instigator, const TEnumAsByte<ESwAbilityUpgradeLevel::Type> AbilityLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnForceLiftStruggleEndOverriden(AActor* Instigator, const TEnumAsByte<ESwAbilityUpgradeLevel::Type> AbilityLevel, bool bHasSucceeded);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnForceLiftStruggleEnd(bool bHasSucceeded);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnForceLiftStart(AActor* Instigator, const TEnumAsByte<ESwAbilityUpgradeLevel::Type> AbilityLevel, bool bIsDarkMode);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnForceLiftStaggerStart(AActor* Instigator, const TEnumAsByte<ESwAbilityUpgradeLevel::Type> AbilityLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnForceLiftStaggerEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnForceLiftOverriden(AActor* Instigator, const TEnumAsByte<ESwAbilityUpgradeLevel::Type> AbilityLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnForceLiftEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnForceFloatStart(AActor* Instigator, const TEnumAsByte<ESwAbilityUpgradeLevel::Type> AbilityLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnForceFloatEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnForceAnalogSlamUpdate(AActor* Instigator, const TEnumAsByte<ESwAbilityUpgradeLevel::Type> AbilityLevel, float TimeInState, float StateDuration, float ExtensionValue);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnForceAnalogSlamStart(AActor* Instigator, const TEnumAsByte<ESwAbilityUpgradeLevel::Type> AbilityLevel, float StateRemainingDuration, float StartingExtension);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnForceAnalogSlamEnd(AActor* Instigator, const TEnumAsByte<ESwAbilityUpgradeLevel::Type> AbilityLevel, float TimeInState, float StateDuration, float ExtensionValue);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnForceAnalogRetractUpdate(AActor* Instigator, const TEnumAsByte<ESwAbilityUpgradeLevel::Type> AbilityLevel, float TimeInState, float StateDuration, float ExtensionValue, bool bIsInLifDirection);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnForceAnalogRetractStart(AActor* Instigator, const TEnumAsByte<ESwAbilityUpgradeLevel::Type> AbilityLevel, float StateRemainingDuration, float StartingExtension, bool bIsInLifDirection);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnForceAnalogRetractEnd(AActor* Instigator, const TEnumAsByte<ESwAbilityUpgradeLevel::Type> AbilityLevel, float TimeInState, float StateDuration, float ExtensionValue, bool bIsInLifDirection);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnForceAnalogLiftUpdate(AActor* Instigator, const TEnumAsByte<ESwAbilityUpgradeLevel::Type> AbilityLevel, float TimeInState, float StateDuration, float ExtensionValue);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnForceAnalogLiftStart(AActor* Instigator, const TEnumAsByte<ESwAbilityUpgradeLevel::Type> AbilityLevel, float StateRemainingDuration, float StartingExtension);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnForceAnalogLiftEnd(AActor* Instigator, const TEnumAsByte<ESwAbilityUpgradeLevel::Type> AbilityLevel, float TimeInState, float StateDuration, float ExtensionValue);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnForceAnalogFloatUpdate(AActor* Instigator, const TEnumAsByte<ESwAbilityUpgradeLevel::Type> AbilityLevel, float TimeInState, float StateDuration, float ExtensionValue);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnForceAnalogFloatStart(AActor* Instigator, const TEnumAsByte<ESwAbilityUpgradeLevel::Type> AbilityLevel, float StateRemainingDuration, float StartingExtension);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnForceAnalogFloatEnd(AActor* Instigator, const TEnumAsByte<ESwAbilityUpgradeLevel::Type> AbilityLevel, float TimeInState, float StateDuration, float ExtensionValue);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FSwLiftSlamAnalogTargetData GetForceAnalogLiftSlamTargetData();
    
};
*/

