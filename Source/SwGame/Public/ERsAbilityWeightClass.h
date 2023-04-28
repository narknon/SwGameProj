#pragma once
#include "CoreMinimal.h"
#include "ERsAbilityWeightClass.generated.h"

UENUM(BlueprintType)
namespace ERsAbilityWeightClass {
    enum Type {
        VeryLight,
        Light,
        Medium,
        Heavy,
        VeryHeavy,
        Count,
    };
}

