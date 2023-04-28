#pragma once
#include "CoreMinimal.h"
#include "EActionDescriptionEndType.generated.h"

UENUM(BlueprintType)
enum class EActionDescriptionEndType : uint8 {
    EMontageBlendedOut,
    EMontageEnded,
};

