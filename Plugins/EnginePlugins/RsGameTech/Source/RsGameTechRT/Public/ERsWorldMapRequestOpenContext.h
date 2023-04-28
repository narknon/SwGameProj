#pragma once
#include "CoreMinimal.h"
#include "ERsWorldMapRequestOpenContext.generated.h"

UENUM(BlueprintType)
enum class ERsWorldMapRequestOpenContext : uint8 {
    Roaming,
    Journey,
    Count,
};

