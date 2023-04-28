#pragma once
#include "CoreMinimal.h"
#include "RsAIBehaviorState.h"
#include "RsAIGoalState.generated.h"

class URsAIGoal;

UCLASS(Blueprintable)
class URsAIGoalState : public URsAIBehaviorState {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<URsAIGoal> AssociatedGoal;
    
    URsAIGoalState();
};

