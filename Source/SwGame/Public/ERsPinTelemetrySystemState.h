#pragma once
#include "CoreMinimal.h"
#include "ERsPinTelemetrySystemState.generated.h"

UENUM(BlueprintType)
enum ERsPinTelemetrySystemState {
    RsPinTelemetrySystemState_Inactive,
    RsPinTelemetrySystemState_ShuttingDown,
    RsPinTelemetrySystemState_Connected,
    RsPinTelemetrySystemState_Booted,
    RsPinTelemetrySystemState_AcquiringGameData,
    RsPinTelemetrySystemState_InGame,
    RsPinTelemetrySystemState_MAX UMETA(Hidden),
};

