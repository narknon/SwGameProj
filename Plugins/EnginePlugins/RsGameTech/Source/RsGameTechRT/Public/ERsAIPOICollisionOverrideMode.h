#pragma once
#include "CoreMinimal.h"
#include "ERsAIPOICollisionOverrideMode.generated.h"

UENUM(BlueprintType)
enum class ERsAIPOICollisionOverrideMode : uint8 {
    None,
    NoPhysicsNoCollision,
};

