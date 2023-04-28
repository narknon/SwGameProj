#pragma once
#include "CoreMinimal.h"
#include "ERsSurveyResult.generated.h"

UENUM(BlueprintType)
enum class ERsSurveyResult : uint8 {
    SURVEY_VOID,
    SURVEY_SURFACE,
    SURVEY_MAX UMETA(Hidden),
};

