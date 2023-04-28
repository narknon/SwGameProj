#pragma once
#include "CoreMinimal.h"
#include "ERsPinTelemetryPlatform.generated.h"

UENUM(BlueprintType)
enum ERsPinTelemetryPlatform {
    RsPinTelemetryPlatform_PC,
    RsPinTelemetryPlatform_PS4,
    RsPinTelemetryPlatform_XboxOne,
    RsPinTelemetryPlatform_PS5,
    RsPinTelemetryPlatform_XSX,
    RsPinTelemetryPlatform_MAX UMETA(Hidden),
};

