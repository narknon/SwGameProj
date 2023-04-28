#pragma once
#include "CoreMinimal.h"
#include "EWorldStateQueryExprType.generated.h"

UENUM(BlueprintType)
enum class EWorldStateQueryExprType : uint8 {
    Undefined,
    AnyWorldStates,
    AllWorldStates,
    AnyExprMatch,
    AllExprMatch,
    NoExprMatch,
};

