#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "SwBTTask_ActiveFightWait.generated.h"

UCLASS(Blueprintable)
class SWGAME_API USwBTTask_ActiveFightWait : public UBTTaskNode {
    GENERATED_BODY()
public:
    USwBTTask_ActiveFightWait();
};

