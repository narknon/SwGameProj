#pragma once
#include "CoreMinimal.h"
#include "ERsAISpatialQueryItemSelectMethod.generated.h"

UENUM(BlueprintType)
namespace ERsAISpatialQueryItemSelectMethod {
    enum Type {
        Best,
        TopFivePercent,
        TopTenPercent,
        TopFifteenPercent,
    };
}

