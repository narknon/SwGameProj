#pragma once
#include "CoreMinimal.h"
#include "ESwPullVictimType.generated.h"

UENUM(BlueprintType)
enum class ESwPullVictimType : uint8 {
    YankOnly,
    YankAndTractorBeam,
    YankAndAttachment,
    TractorCounter,
    Struggle,
    Count,
};

