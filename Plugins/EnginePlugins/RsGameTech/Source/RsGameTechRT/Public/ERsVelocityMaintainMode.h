#pragma once
#include "CoreMinimal.h"
#include "ERsVelocityMaintainMode.generated.h"

UENUM(BlueprintType)
enum ERsVelocityMaintainMode {
    NoChange,
    MaintainedOverAnimation,
    MaintainedDuringEvents,
};

