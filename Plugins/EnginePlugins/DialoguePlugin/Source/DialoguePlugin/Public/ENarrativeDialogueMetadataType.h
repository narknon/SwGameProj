#pragma once
#include "CoreMinimal.h"
#include "ENarrativeDialogueMetadataType.generated.h"

UENUM(BlueprintType)
enum class ENarrativeDialogueMetadataType : uint8 {
    Gameplay,
    Systemic,
    Cinematic,
};

