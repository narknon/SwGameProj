#pragma once
#include "CoreMinimal.h"
#include "ERsTOIState.generated.h"

UENUM(BlueprintType)
enum class ERsTOIState : uint8 {
    TOIS_NOT_STARTED,
    TOIS_GJK,
    TOIS_INITIALIZE_AXIS,
    TOIS_FIND_DEEPEST_POINTS,
    TOIS_CALCULATE_SEPARATION,
    TOIS_SOLVING_ROOT,
    TOIS_FINISHED,
    TOIS_MAX UMETA(Hidden),
};

