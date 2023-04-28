#pragma once
#include "CoreMinimal.h"
#include "ERsHitPauseType.generated.h"

UENUM(BlueprintType)
enum class ERsHitPauseType : uint8 {
    HitPause_Both,
    HitPause_Attacker,
    HitPause_Victim,
    HitPause_MAX UMETA(Hidden),
};

