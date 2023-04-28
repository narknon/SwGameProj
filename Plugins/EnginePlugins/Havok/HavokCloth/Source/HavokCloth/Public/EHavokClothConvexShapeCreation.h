#pragma once
#include "CoreMinimal.h"
#include "EHavokClothConvexShapeCreation.generated.h"

UENUM(BlueprintType)
enum class EHavokClothConvexShapeCreation : uint8 {
    CONVEX_PLANES,
    CONVEX_GEOMETRY,
    CONVEX_MAX UMETA(Hidden),
};

