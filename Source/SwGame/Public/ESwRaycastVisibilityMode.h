#pragma once
#include "CoreMinimal.h"
#include "ESwRaycastVisibilityMode.generated.h"

UENUM(BlueprintType)
enum class ESwRaycastVisibilityMode : uint8 {
    None,
    RootTransform,
    CharacterBones,
    Count,
};

