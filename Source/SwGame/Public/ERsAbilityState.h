#pragma once
#include "CoreMinimal.h"
#include "ERsAbilityState.generated.h"

UENUM(BlueprintType)
enum class ERsAbilityState : uint8 {
    None,
    Pull_Activated,
    Pull_Yank,
    Pull_Hold,
    AOEPull_Activated,
    AOEPull_Deactivated,
};

