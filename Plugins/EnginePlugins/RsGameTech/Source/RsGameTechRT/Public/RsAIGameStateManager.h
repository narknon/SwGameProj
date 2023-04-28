#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "ERsAIAwarenessState.h"
#include "ERsAIGameState.h"
#include "RsAIOnAIGameStateChangedEventDelegate.h"
#include "RsAIOnCombatantDiedEventDelegate.h"
#include "RsAIOnPlayerVictoryEventDelegate.h"
#include "RsAIOnTranquilityAchievedEventDelegate.h"
#include "RsAIGameStateManager.generated.h"

class AActor;
class AController;
class ARsAIController;
class UDamageType;
class URsAISystem;
class URsTargetableComponent;

UCLASS(Blueprintable)
class URsAIGameStateManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsAIOnAIGameStateChangedEvent OnGameStateChangedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsAIOnCombatantDiedEvent OnCombatantDiedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsAIOnCombatantDiedEvent OnEverCombatantDefeatedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsAIOnTranquilityAchievedEvent OnTranquilityAchievedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsAIOnPlayerVictoryEvent OnPlayerVictoryEvent;
    
    URsAIGameStateManager();
private:
    UFUNCTION(BlueprintCallable)
    void OnTakeAnyOrNoDamage(AActor* DamagedActor, float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser);
    
    UFUNCTION(BlueprintCallable)
    void OnPreFactionChange(URsTargetableComponent* TargetableComponent, FGameplayTag PreviousFactionTag, FGameplayTag NewFactionTag);
    
    UFUNCTION(BlueprintCallable)
    void OnAwarenessStateChanged(ARsAIController* AIController, TEnumAsByte<ERsAIAwarenessState::Type> PreviousAwarenessState, TEnumAsByte<ERsAIAwarenessState::Type> NewAwarenessState);
    
    UFUNCTION(BlueprintCallable)
    void OnAttackTargetChanged(ARsAIController* AIController);
    
    UFUNCTION(BlueprintCallable)
    void OnAIUninitialized(URsAISystem* AISystem, ARsAIController* AIController);
    
    UFUNCTION(BlueprintCallable)
    void OnAIInitialized(URsAISystem* AISystem, ARsAIController* AIController);
    
    UFUNCTION(BlueprintCallable)
    void OnAIDied(AActor* DeadActor);
    
    UFUNCTION(BlueprintCallable)
    void OnAIDestroyed(AActor* DestroyedActor);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTranquil() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumTotalCombatants() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumCombatantsKilledByPlayer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumCombatantsKilled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumAliveCombatants() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumAIAttackingPlayer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TEnumAsByte<ERsAIGameState::Type> GetGameState() const;
    
};

