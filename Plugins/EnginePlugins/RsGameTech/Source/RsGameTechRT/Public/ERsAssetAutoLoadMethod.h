#pragma once
#include "CoreMinimal.h"
#include "ERsAssetAutoLoadMethod.generated.h"

UENUM(BlueprintType)
enum ERsAssetAutoLoadMethod {
    Everything,
    Inclusive,
    Exclusive,
};

