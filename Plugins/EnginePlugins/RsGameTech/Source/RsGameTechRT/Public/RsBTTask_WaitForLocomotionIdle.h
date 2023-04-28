#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "RsBTTask_WaitForLocomotionIdle.generated.h"

UCLASS(Blueprintable)
class URsBTTask_WaitForLocomotionIdle : public UBTTaskNode {
    GENERATED_BODY()
public:
    URsBTTask_WaitForLocomotionIdle();
};

