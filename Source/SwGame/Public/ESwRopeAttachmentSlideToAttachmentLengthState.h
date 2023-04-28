#pragma once
#include "CoreMinimal.h"
#include "ESwRopeAttachmentSlideToAttachmentLengthState.generated.h"

UENUM(BlueprintType)
enum class ESwRopeAttachmentSlideToAttachmentLengthState : uint8 {
    NotSliding,
    SlidingUp,
    SlidingDown,
};

