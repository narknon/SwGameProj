#pragma once
#include "CoreMinimal.h"
#include "ERsWorldStateNumberComparisonType.generated.h"

UENUM(BlueprintType)
enum ERsWorldStateNumberComparisonType {
    Equal,
    NotEqual,
    GreaterThan,
    LessThan,
    GreaterThanOrEqual,
    LessThanOrEqual,
};

