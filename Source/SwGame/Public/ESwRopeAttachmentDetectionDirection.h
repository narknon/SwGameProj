#pragma once
#include "CoreMinimal.h"
#include "ESwRopeAttachmentDetectionDirection.generated.h"

UENUM(BlueprintType)
enum class ESwRopeAttachmentDetectionDirection : uint8 {
    ActorForward,
    MovementInput,
    Camera,
};

