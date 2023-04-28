#pragma once
#include "CoreMinimal.h"
#include "ERsAIPOIBehaviorAction.generated.h"

UENUM(BlueprintType)
enum class ERsAIPOIBehaviorAction : uint8 {
    NoChange,
    Abort,
    Finish,
};

