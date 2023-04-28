#pragma once
#include "CoreMinimal.h"
#include "ENarrativeDebugLogType.generated.h"

UENUM(BlueprintType)
enum class ENarrativeDebugLogType : uint8 {
    Narrative,
    NPC,
    Conversation,
    DialogueSelection,
    Lookats,
};

