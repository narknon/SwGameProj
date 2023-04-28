#pragma once
#include "CoreMinimal.h"
#include "ESwForcePushHitType.generated.h"

UENUM(BlueprintType)
enum class ESwForcePushHitType : uint8 {
    FPHT_Glancing,
    FPHT_Direct,
    FPHT_Super,
    FPHT_Stagger,
    FPHT_Count,
    FPHT_MAX UMETA(Hidden),
};

