#pragma once
#include "CoreMinimal.h"
#include "ERsAINavPathUpdateRule.generated.h"

UENUM(BlueprintType)
enum class ERsAINavPathUpdateRule : uint8 {
    Always,
    RecentlyRendered,
    RecentlyRenderedAndNotOccluded,
    Never,
};

