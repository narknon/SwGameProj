#pragma once
#include "CoreMinimal.h"
#include "ESwPullEffectState.generated.h"

UENUM(BlueprintType)
enum class ESwPullEffectState : uint8 {
    None,
    Jiggle,
    PullEnterCharacter,
    StruggleCharacter,
    StruggleCharacterSuccess,
    Pulling,
    PullingRope,
    PullHold,
    PullEnterCounter,
    PullCounter,
    PullCounterEnd,
    PullEnterAnimationDriven,
    PullHoldAnimationDriven,
    PullAttachment,
    PullDoubleSlam,
    PullDoubleSlamContact,
    Ended,
    Count,
};

