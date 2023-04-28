#pragma once
#include "CoreMinimal.h"
#include "ERsWorldMapOffsetType.generated.h"

UENUM(BlueprintType)
enum class ERsWorldMapOffsetType : uint8 {
    Default,
    NormalMount,
    Spamel,
    Count,
};

