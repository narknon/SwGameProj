#pragma once
#include "CoreMinimal.h"
#include "ERsTweakCollisionShapeType.generated.h"

UENUM(BlueprintType)
enum class ERsTweakCollisionShapeType : uint8 {
    Sphere,
    Capsule,
    Box,
    Convex,
};

