#pragma once
#include "CoreMinimal.h"
#include "ENiagaraAudioActorActivationMode.generated.h"

UENUM(BlueprintType)
enum class ENiagaraAudioActorActivationMode : uint8 {
    Standard,
    RandomisedTimers,
    MAX,
};

