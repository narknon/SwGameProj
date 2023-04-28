#pragma once
#include "CoreMinimal.h"
#include "ESwSpeederBikeBoostMode.generated.h"

UENUM(BlueprintType)
enum class ESwSpeederBikeBoostMode : uint8 {
    None,
    InputControlsStartAndFinish,
    UseMeter,
};

