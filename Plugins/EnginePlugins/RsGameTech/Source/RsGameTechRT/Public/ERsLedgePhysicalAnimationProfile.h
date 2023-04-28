#pragma once
#include "CoreMinimal.h"
#include "ERsLedgePhysicalAnimationProfile.generated.h"

UENUM(BlueprintType)
enum class ERsLedgePhysicalAnimationProfile : uint8 {
    None,
    LegsFree,
    LegsRigid,
};

