#pragma once
#include "CoreMinimal.h"
#include "EBalanceBeamState.generated.h"

UENUM(BlueprintType)
enum class EBalanceBeamState : uint8 {
    NotOnBeam,
    OnBalanceBeam,
    OnMonkeyBeam,
    ClimbingToBalanceBeam,
    FallingToMonkeyBeam,
};

