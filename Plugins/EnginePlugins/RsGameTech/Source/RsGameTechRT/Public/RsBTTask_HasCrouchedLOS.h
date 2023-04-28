#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "RsBTTask_HasCrouchedLOS.generated.h"

UCLASS(Blueprintable)
class URsBTTask_HasCrouchedLOS : public UBTTaskNode {
    GENERATED_BODY()
public:
    URsBTTask_HasCrouchedLOS();
};

