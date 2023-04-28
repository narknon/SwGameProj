#pragma once
#include "CoreMinimal.h"
#include "ESwAbilityEffectState.generated.h"

UENUM(BlueprintType)
enum class ESwAbilityEffectState : uint8 {
    None,
    Slow,
    Pull_Yank,
    Pull_Tractor,
    Pull_Hold,
    Pull_DoubleSlamContact,
    Pull_Attachment,
    Push,
    Slam,
    Lift_Struggle,
    Lift_Stagger,
    Lift,
    Lift_Floating,
    Lift_Retracting,
    Count,
};

