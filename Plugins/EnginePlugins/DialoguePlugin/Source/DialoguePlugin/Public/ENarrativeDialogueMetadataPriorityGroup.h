#pragma once
#include "CoreMinimal.h"
#include "ENarrativeDialogueMetadataPriorityGroup.generated.h"

UENUM(BlueprintType)
enum class ENarrativeDialogueMetadataPriorityGroup : uint8 {
    Default,
    HubGlobal,
    HubMacroState,
    HubSubstate,
    Priority2,
    Priority1,
};

