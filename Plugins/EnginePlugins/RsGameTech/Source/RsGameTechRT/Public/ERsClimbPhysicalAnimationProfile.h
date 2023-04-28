#pragma once
#include "CoreMinimal.h"
#include "ERsClimbPhysicalAnimationProfile.generated.h"

UENUM(BlueprintType)
enum class ERsClimbPhysicalAnimationProfile : uint8 {
    None,
    Default,
    ClimbHang,
    ClimbCeiling,
};

