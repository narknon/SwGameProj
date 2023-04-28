#pragma once
#include "CoreMinimal.h"
#include "ESwAIBuddyDroidMoveMode.generated.h"

UENUM(BlueprintType)
enum class ESwAIBuddyDroidMoveMode : uint8 {
    None,
    Follow,
    Attached,
};

