#pragma once
#include "CoreMinimal.h"
#include "ERsMotionInputDirectionIntentMode.generated.h"

UENUM(BlueprintType)
enum class ERsMotionInputDirectionIntentMode : uint8 {
    RequestedByController,
    SetExternally,
};

