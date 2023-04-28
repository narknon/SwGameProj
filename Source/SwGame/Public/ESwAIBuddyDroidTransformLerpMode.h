#pragma once
#include "CoreMinimal.h"
#include "ESwAIBuddyDroidTransformLerpMode.generated.h"

UENUM(BlueprintType)
enum class ESwAIBuddyDroidTransformLerpMode : uint8 {
    None,
    Attaching,
    Detaching,
    EnterZipline,
};

