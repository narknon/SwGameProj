#pragma once
#include "CoreMinimal.h"
#include "ERsBalanceBeamPhysicalAnimationProfile.generated.h"

UENUM(BlueprintType)
enum class ERsBalanceBeamPhysicalAnimationProfile : uint8 {
    None,
    Walking,
    Hanging,
};

