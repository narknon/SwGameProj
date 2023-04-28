#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ERsStepAsideState.h"
#include "RsStepAsideRequestData.h"
#include "RsAIStepAsideComponent.generated.h"

class URsAIStepAsideBehaviorParameters;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class URsAIStepAsideComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStepAsideEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URsAIStepAsideBehaviorParameters* DataDrivenParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsStepAsideRequestData CurrentStepAsideRequestData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERsStepAsideState CurrentStepAsideState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LastStepAsideStateChangeTime;
    
public:
    URsAIStepAsideComponent();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TickCurrentState(ERsStepAsideState CurrentState, float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void SetStepAsideEnabled(bool bInEnabled);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStepAsideStateChanged(ERsStepAsideState OldState, ERsStepAsideState NewState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStepAsideRequestStarted(const FRsStepAsideRequestData& StepAsideRequestData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStepAsideRequestEnded();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStepAsideRequestChanged(const FRsStepAsideRequestData& StepAsideRequestData);
    
    UFUNCTION(BlueprintCallable)
    void OnCompletedReturningToPlace();
    
    UFUNCTION(BlueprintCallable)
    void OnCompletedReactionDelay();
    
    UFUNCTION(BlueprintCallable)
    void OnCompletedInitialStepAside();
    
    UFUNCTION(BlueprintCallable)
    void OnCompletedHolding();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStepAsideEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetLastStepAsideStateChangeTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetElapsedSecondsSinceLastStateChange() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    URsAIStepAsideBehaviorParameters* GetDataDrivenParameters() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ERsStepAsideState GetCurrentStepAsideState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRsStepAsideRequestData GetCurrentStepAsideRequestData() const;
    
    UFUNCTION(BlueprintCallable)
    void ChangeState(ERsStepAsideState NewState);
    
};

