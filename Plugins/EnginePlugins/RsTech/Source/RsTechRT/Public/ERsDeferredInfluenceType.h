#pragma once
#include "CoreMinimal.h"
#include "ERsDeferredInfluenceType.generated.h"

UENUM(BlueprintType)
enum ERsDeferredInfluenceType {
    DEFERRED_MOTION,
    DEFERRED_ANIMATION,
    DEFERRED_IMPULSE,
    Count,
};

