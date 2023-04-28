#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "RsBTTask_NotifyArrivedHome.generated.h"

UCLASS(Blueprintable)
class URsBTTask_NotifyArrivedHome : public UBTTaskNode {
    GENERATED_BODY()
public:
    URsBTTask_NotifyArrivedHome();
};

