#pragma once
#include "CoreMinimal.h"
#include "EViewportPaddingMode.generated.h"

UENUM(BlueprintType)
enum EViewportPaddingMode {
    VPM_Percentage,
    VPM_Pixels,
    VPM_MAX UMETA(Hidden),
};

