#pragma once
#include "CoreMinimal.h"
#include "ERsWorldMapGatewayState.generated.h"

UENUM(BlueprintType)
enum class ERsWorldMapGatewayState : uint8 {
    Hidden,
    Visible,
    Invalid,
    Count,
};

