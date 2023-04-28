#pragma once
#include "CoreMinimal.h"
#include "EMindTrickState.generated.h"

UENUM(BlueprintType)
enum class EMindTrickState : uint8 {
    Inactive,
    Activated,
    Triggered,
    Intro,
    Behavior,
    Outro,
};

