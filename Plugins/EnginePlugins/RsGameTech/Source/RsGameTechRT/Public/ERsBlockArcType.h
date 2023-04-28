#pragma once
#include "CoreMinimal.h"
#include "ERsBlockArcType.generated.h"

UENUM(BlueprintType)
enum class ERsBlockArcType : uint8 {
    BlockArc,
    ProjectileArc,
    ParryArc,
    All,
};

