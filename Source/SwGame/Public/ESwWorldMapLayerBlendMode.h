#pragma once
#include "CoreMinimal.h"
#include "ESwWorldMapLayerBlendMode.generated.h"

UENUM(BlueprintType)
enum class ESwWorldMapLayerBlendMode : uint8 {
    Additive,
    Translucent,
    Opaque,
};

