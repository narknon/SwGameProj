#pragma once
#include "CoreMinimal.h"
#include "ESwPullAbilityState.generated.h"

UENUM(BlueprintType)
enum class ESwPullAbilityState : uint8 {
    None,
    Activate,
    Yank,
    TractorEnter,
    TractorHold,
    DoubleTractorFail,
    DoubleTractorYank,
    DoubleTractorStruggle,
    DoubleTractor,
    DoubleTractorHold,
    DoubleTractorPush,
    DoubleTractorSlamBegin,
    DoubleTractorSlamAllowContact,
    DoubleTractorSlamContact,
    Attachment,
    Slash,
    Count,
};

