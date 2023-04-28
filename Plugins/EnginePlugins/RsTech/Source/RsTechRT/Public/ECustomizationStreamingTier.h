#pragma once
#include "CoreMinimal.h"
#include "ECustomizationStreamingTier.generated.h"

UENUM(BlueprintType)
enum class ECustomizationStreamingTier : uint8 {
    None,
    UIOffScreen,
    Equipped,
    UIDisplay,
    UIEquipped,
};

