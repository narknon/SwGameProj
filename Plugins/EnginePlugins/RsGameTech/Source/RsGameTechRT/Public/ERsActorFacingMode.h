#pragma once
#include "CoreMinimal.h"
#include "ERsActorFacingMode.generated.h"

UENUM(BlueprintType)
enum class ERsActorFacingMode : uint8 {
    PathDirection,
    FocusTrackingTarget,
    ChumpConversationFocusAndTurns,
};

