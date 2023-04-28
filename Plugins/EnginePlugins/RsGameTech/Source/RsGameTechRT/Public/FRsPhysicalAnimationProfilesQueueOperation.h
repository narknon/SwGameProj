#pragma once
#include "CoreMinimal.h"
#include "FRsPhysicalAnimationProfilesQueueOperation.generated.h"

UENUM(BlueprintType)
enum class FRsPhysicalAnimationProfilesQueueOperation : uint8 {
    None,
    StartProfile,
    StopProfile,
};

