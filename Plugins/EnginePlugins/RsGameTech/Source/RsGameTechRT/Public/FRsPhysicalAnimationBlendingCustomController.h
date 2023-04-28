#pragma once
#include "CoreMinimal.h"
#include "FRsPhysicalAnimationBlendingCustomController.generated.h"

UENUM(BlueprintType)
enum class FRsPhysicalAnimationBlendingCustomController : uint8 {
    None,
    HeroTurning,
    HeroStop,
    HeroStart,
};

