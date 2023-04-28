#pragma once
#include "CoreMinimal.h"
#include "ERsAIPOIRequestResult.generated.h"

UENUM(BlueprintType)
enum class ERsAIPOIRequestResult : uint8 {
    Succeeded,
    PendingAsyncLoading,
    RequesterNotAlive,
    RequesterNotInAssociatedEncounterGroups,
    UndefinedRequesterType,
    FilteredByType,
    SpawnGroupNamesDoNotMatch,
    RequesterInCooldown,
    FilteredByAwareness,
    SlotIsFull,
    ConditionalEvaluationFailed,
    RequesterHasPendingRequest,
    GoalRegisitrationFailed,
    PathFindingFailed,
    Unspecified,
};

