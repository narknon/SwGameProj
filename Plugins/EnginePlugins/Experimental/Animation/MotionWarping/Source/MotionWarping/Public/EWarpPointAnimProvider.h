#pragma once
#include "CoreMinimal.h"
#include "EWarpPointAnimProvider.generated.h"

UENUM(BlueprintType)
enum class EWarpPointAnimProvider : uint8 {
    None,
    Static,
    Bone,
};

