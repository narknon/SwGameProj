#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "RsAIGoalBehaviorDescriptor.generated.h"

class UBehaviorTree;
class URsAIGoal;

USTRUCT(BlueprintType)
struct RSGAMETECHRT_API FRsAIGoalBehaviorDescriptor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBehaviorTree* Behavior;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NoClear, meta=(AllowPrivateAccess=true))
    TSubclassOf<URsAIGoal> GoalClass;
    
    FRsAIGoalBehaviorDescriptor();
};

