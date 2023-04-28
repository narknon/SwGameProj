#pragma once
#include "CoreMinimal.h"
#include "ERsAISpawnAssetRequestAsyncPriority.generated.h"

UENUM(BlueprintType)
enum class ERsAISpawnAssetRequestAsyncPriority : uint8 {
    DEFAULT,
    HIGH,
    UNDEFINED,
};

