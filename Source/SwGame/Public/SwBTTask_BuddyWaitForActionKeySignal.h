#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "SwBTTask_BuddyWaitForActionKeySignal.generated.h"

UCLASS(Blueprintable)
class USwBTTask_BuddyWaitForActionKeySignal : public UBTTaskNode {
    GENERATED_BODY()
public:
    USwBTTask_BuddyWaitForActionKeySignal();
};

