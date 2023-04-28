#pragma once
#include "CoreMinimal.h"
#include "ERsWindFieldVerticalInfluenceMode.generated.h"

UENUM(BlueprintType)
enum class ERsWindFieldVerticalInfluenceMode : uint8 {
    Standard,
    OnlyWhenFalling,
    DirectVelocityChange,
};

