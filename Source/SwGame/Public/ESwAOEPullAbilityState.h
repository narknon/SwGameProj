#pragma once
#include "CoreMinimal.h"
#include "ESwAOEPullAbilityState.generated.h"

UENUM(BlueprintType)
enum class ESwAOEPullAbilityState : uint8 {
    None,
    Activate,
    Yank,
    Count,
};

