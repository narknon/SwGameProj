#pragma once
#include "CoreMinimal.h"
#include "EAKThreadPriority.generated.h"

UENUM()
enum class EAKThreadPriority : int32 {
    ETP_AKThreadPriorityNormal,
    ETP_AKThreadPriorityAboveNormal,
    ETP_AKThreadPriorityTimeCritical = 0xF,
    ETP_MAX UMETA(Hidden),
};

