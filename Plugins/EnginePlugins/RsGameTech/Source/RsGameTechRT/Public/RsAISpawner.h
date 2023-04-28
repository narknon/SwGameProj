#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "ERsAIDespawnReason.h"
#include "RsAIAwarenessLevelChangedEventDelegate.h"
#include "RsAIAwarenessStateChangedEventDelegate.h"
#include "RsAIBehaviorStateMachineChangedEventDelegate.h"
#include "RsAIBehaviorStateTransitionEventDelegate.h"
#include "RsAICharacterChangedAreaEventDelegate.h"
#include "RsAICharacterDespawnedEventDelegate.h"
#include "RsAICharacterSpawnedEventDelegate.h"
#include "RsAISpawner.generated.h"

class ARsAIEncounterGroup;
class ARsAILeashingActor;

UCLASS(Blueprintable)
class ARsAISpawner : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsAICharacterSpawnedEvent OnAISpawnedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsAICharacterDespawnedEvent OnAIDespawnedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsAICharacterChangedAreaEvent OnAIChangedAreaEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsAIAwarenessStateChangedEvent OnAwarenessStateChangedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsAIAwarenessLevelChangedEvent OnAwarenessLevelChangedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsAIBehaviorStateMachineChangedEvent OnBehaviorStateMachineChangedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsAIBehaviorStateTransitionEvent OnBehaviorStateTransitionEvent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARsAILeashingActor* LeashingBounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableCrossAreaTravel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARsAIEncounterGroup* AssociatedEncounterGroup;
    
public:
    ARsAISpawner();
    UFUNCTION(BlueprintCallable)
    void PrimeSpawner();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector GetIntroAnimationWarpTarget(int32 SpawnerSlot) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ARsAIEncounterGroup* GetAssociatedEncounterGroup() const;
    
    UFUNCTION(BlueprintCallable)
    void EnableSpawner(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void DespawnAllAI(TEnumAsByte<ERsAIDespawnReason::Type> DespawnReason);
    
};

