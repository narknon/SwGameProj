#pragma once
#include "CoreMinimal.h"
#include "ERsCollisionShapeType.generated.h"

UENUM(BlueprintType)
namespace ERsCollisionShapeType {
    enum Type {
        RCST_INVALID,
        RCST_SPHERE,
        RCST_CAPSULE,
        RCST_BOX,
        RCST_CONVEX,
        RCST_MAX UMETA(Hidden),
    };
}

