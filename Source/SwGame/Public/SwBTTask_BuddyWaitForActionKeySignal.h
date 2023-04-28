#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "SwBTTask_BuddyWaitForActionKeySignal.generated.h"

UCLASS(Blueprintable)
class SWGAME_API USwBTTask_BuddyWaitForActionKeySignal : public UBTTaskNode {
    GENERATED_BODY()
public:
    USwBTTask_BuddyWaitForActionKeySignal();
};

