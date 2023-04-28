#pragma once
#include "CoreMinimal.h"
#include "EWorldStatesContainerType.generated.h"

UENUM(BlueprintType)
enum class EWorldStatesContainerType : uint8 {
    RequiresCompletion,
    RequiresIncompletion,
};

