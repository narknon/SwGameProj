#pragma once
#include "CoreMinimal.h"
#include "EBehaviorStateMachineTemplate.generated.h"

UENUM(BlueprintType)
enum class EBehaviorStateMachineTemplate : uint8 {
    None,
    SingleState,
    ResumeDefaultBehaviorUponMinPlayerDistance,
    ResumeDefaultBehaviorUponAlertOrAggro,
    ResumeDefaultBehaviorUponCustomTransitionCondition,
};

