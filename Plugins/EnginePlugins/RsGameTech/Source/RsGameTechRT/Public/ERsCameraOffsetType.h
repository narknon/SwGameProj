#pragma once
#include "CoreMinimal.h"
#include "ERsCameraOffsetType.generated.h"

UENUM(BlueprintType)
enum class ERsCameraOffsetType : uint8 {
    RsCameraOffsetType_World,
    RsCameraOffsetType_CameraSpace,
    RsCameraOffsetType_CameraSpaceYaw,
    RsCameraOffsetType_MAX UMETA(Hidden),
};

