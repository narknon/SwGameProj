#pragma once
#include "CoreMinimal.h"
#include "ERsAISoundType.generated.h"

UENUM(BlueprintType)
namespace ERsAISoundType {
    enum Type {
        Tiny,
        Quiet,
        Moderate,
        Loud,
        ExtraLoud,
        Extreme,
        NumTypes,
    };
}

