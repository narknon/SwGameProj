#pragma once
#include "CoreMinimal.h"
#include "EButtonMashLengthType.generated.h"

UENUM(BlueprintType)
enum EButtonMashLengthType {
    TimeBased,
    MontageSection,
    AnimationSpecified,
    SyncGroupBased,
    EButtonMashLengthType_Max,
};

