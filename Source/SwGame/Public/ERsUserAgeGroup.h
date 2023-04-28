#pragma once
#include "CoreMinimal.h"
#include "ERsUserAgeGroup.generated.h"

UENUM(BlueprintType)
namespace ERsUserAgeGroup {
    enum Type {
        Unknown,
        Underage,
        NotUnderage,
    };
}

