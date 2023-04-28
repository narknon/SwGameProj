#pragma once
#include "CoreMinimal.h"
#include "ERsLedgeReachSurveyResult.generated.h"

UENUM(BlueprintType)
enum class ERsLedgeReachSurveyResult : uint8 {
    WAITING_FOR_RESULT,
    NO_LEDGE,
    HAS_LEDGE,
};

