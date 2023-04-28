#pragma once
#include "CoreMinimal.h"
#include "RsStateBlueprintBase.h"
#include "RsAIBehaviorState.generated.h"

class ARsAIController;
class UBehaviorTree;
class URsAIBehaviorStateMachine;

UCLASS(Blueprintable)
class URsAIBehaviorState : public URsStateBlueprintBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBehaviorTree* BehaviorTree;
    
    URsAIBehaviorState();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ARsAIController* GetRsOwner() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    URsAIBehaviorStateMachine* GetOwningStateMachine() const;
    
    UFUNCTION(BlueprintCallable)
    void CompleteState();
    
};

