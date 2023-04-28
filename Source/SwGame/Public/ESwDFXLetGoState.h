#pragma once
#include "CoreMinimal.h"
#include "ESwDFXLetGoState.generated.h"

UENUM(BlueprintType)
enum class ESwDFXLetGoState : uint8 {
    LettingGo,
    Off,
    Fail,
    FailFromClimb,
};

