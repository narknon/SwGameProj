#pragma once
#include "CoreMinimal.h"
#include "ERsIKShape.generated.h"

UENUM(BlueprintType)
namespace ERsIKShape {
    enum Type {
        Line,
        Box,
        Sphere,
        Capsule,
    };
}

