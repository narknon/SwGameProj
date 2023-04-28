#pragma once
#include "CoreMinimal.h"
#include "EHavokClothCollidableShape.generated.h"

UENUM(BlueprintType)
enum class EHavokClothCollidableShape : uint8 {
    PLANE,
    SPHERE,
    CAPSULE,
    TAPERED_CAPSULE,
    BOX,
    CYLINDER,
    CONVEX,
    PHYSICS_SHAPE,
    NONE,
};

