#pragma once
#include "CoreMinimal.h"
#include "ESwRopeAttachmentPhysicalAnimationProfile.generated.h"

UENUM(BlueprintType)
enum class ESwRopeAttachmentPhysicalAnimationProfile : uint8 {
    None,
    Hanging,
    Climbing,
};

