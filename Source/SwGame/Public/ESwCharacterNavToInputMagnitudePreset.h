#pragma once
#include "CoreMinimal.h"
#include "ESwCharacterNavToInputMagnitudePreset.generated.h"

UENUM(BlueprintType)
enum class ESwCharacterNavToInputMagnitudePreset : uint8 {
    NoInput,
    QuarterInput,
    HalfInput,
    ThreeQuartersInput,
    FullInput,
    CustomInput,
};

