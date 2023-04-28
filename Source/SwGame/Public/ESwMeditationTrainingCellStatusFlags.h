#pragma once
#include "CoreMinimal.h"
#include "ESwMeditationTrainingCellStatusFlags.generated.h"

UENUM(BlueprintType)
enum class ESwMeditationTrainingCellStatusFlags : uint8 {
    Disabled,
    Selected,
    Occupied,
    Status_3 = 0x4,
    Status_4 = 0x8,
    Status_5 = 0x10,
    Status_6 = 0x20,
    Status_7 = 0x40,
    Status_8 = 0x80,
    Busy = 0x6,
    Unavailable = 0x5,
    ESwMeditationTrainingCellStatusFlags_MAX = 0x81,
};

