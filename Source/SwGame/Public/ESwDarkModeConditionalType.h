#pragma once
#include "CoreMinimal.h"
#include "ESwDarkModeConditionalType.generated.h"

UENUM(BlueprintType)
enum class ESwDarkModeConditionalType : uint8 {
    None,
    InDarkMode,
    NotInDarkMode,
    Count,
};

