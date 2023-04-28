#pragma once
#include "CoreMinimal.h"
#include "ERsWorldMapStateTransitionAutoUpdateType.generated.h"

UENUM(BlueprintType)
enum class ERsWorldMapStateTransitionAutoUpdateType : uint8 {
    Transform,
    Count,
};

