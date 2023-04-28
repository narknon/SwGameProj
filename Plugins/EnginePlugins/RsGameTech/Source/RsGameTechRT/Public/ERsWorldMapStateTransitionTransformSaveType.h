#pragma once
#include "CoreMinimal.h"
#include "ERsWorldMapStateTransitionTransformSaveType.generated.h"

UENUM(BlueprintType)
enum class ERsWorldMapStateTransitionTransformSaveType : uint8 {
    DontSaveOnBroadcast,
    SaveOnBroadcastIfNotSet,
    Count,
};

