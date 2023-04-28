#pragma once
#include "CoreMinimal.h"
#include "ESwAuxiliaryAbilityState.generated.h"

UENUM(BlueprintType)
enum class ESwAuxiliaryAbilityState : uint8 {
    None,
    Push,
    PullTractor,
    PullYank,
    PullAttachment,
    PullRope,
    Lift,
    Slam,
    AOEPull,
    AOEPush,
    AOESlow,
    Count,
};

