#pragma once
#include "CoreMinimal.h"
#include "ENarrativeDialogueAnimTrackEventType.generated.h"

UENUM(BlueprintType)
enum class ENarrativeDialogueAnimTrackEventType : uint8 {
    Gesture,
    Idle,
    Lookat,
};

