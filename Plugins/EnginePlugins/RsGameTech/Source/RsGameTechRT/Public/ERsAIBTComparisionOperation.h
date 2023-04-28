#pragma once
#include "CoreMinimal.h"
#include "ERsAIBTComparisionOperation.generated.h"

UENUM(BlueprintType)
namespace ERsAIBTComparisionOperation {
    enum Type {
        Greater,
        Less,
        GreaterOrEqual,
        LessOrEqual,
    };
}

