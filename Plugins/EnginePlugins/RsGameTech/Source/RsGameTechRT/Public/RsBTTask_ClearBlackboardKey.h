#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "RsBTTask_ClearBlackboardKey.generated.h"

UCLASS(Blueprintable)
class URsBTTask_ClearBlackboardKey : public UBTTaskNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector BlackboardKey;
    
public:
    URsBTTask_ClearBlackboardKey();
};

