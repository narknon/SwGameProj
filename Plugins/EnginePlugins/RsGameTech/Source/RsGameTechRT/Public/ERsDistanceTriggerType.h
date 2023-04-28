#pragma once
#include "CoreMinimal.h"
#include "ERsDistanceTriggerType.generated.h"

UENUM(BlueprintType)
enum class ERsDistanceTriggerType : uint8 {
    HeroOnly,
    RsCharacters,
    Camera,
};

