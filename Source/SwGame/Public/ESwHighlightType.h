#pragma once
#include "CoreMinimal.h"
#include "ESwHighlightType.generated.h"

UENUM(BlueprintType)
enum class ESwHighlightType : uint8 {
    None,
    Unblockable,
    ForceTargetCharacter,
    ForceTargetNonCharacter,
    ForceTargetAlternate,
    Revenge,
    BeastTame,
    ForceTargetUnblockable,
    MindTrick,
    ForceFocusTarget,
    Count,
};

