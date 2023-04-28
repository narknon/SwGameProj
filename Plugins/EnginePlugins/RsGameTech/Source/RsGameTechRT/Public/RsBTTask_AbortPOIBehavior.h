#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "RsBTTask_AbortPOIBehavior.generated.h"

UCLASS(Blueprintable)
class URsBTTask_AbortPOIBehavior : public UBTTaskNode {
    GENERATED_BODY()
public:
    URsBTTask_AbortPOIBehavior();
};

