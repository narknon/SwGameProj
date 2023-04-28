#pragma once
#include "CoreMinimal.h"
#include "ERsMessageLogSeverity.generated.h"

UENUM(BlueprintType)
enum class ERsMessageLogSeverity : uint8 {
    CriticalError,
    Error,
    PerformanceWarning,
    Warning,
    Info,
};

