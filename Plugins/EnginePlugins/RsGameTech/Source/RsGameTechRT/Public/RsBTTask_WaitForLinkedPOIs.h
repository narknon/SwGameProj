#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "RsBTTask_WaitForLinkedPOIs.generated.h"

UCLASS(Blueprintable)
class URsBTTask_WaitForLinkedPOIs : public UBTTaskNode {
    GENERATED_BODY()
public:
    URsBTTask_WaitForLinkedPOIs();
};

