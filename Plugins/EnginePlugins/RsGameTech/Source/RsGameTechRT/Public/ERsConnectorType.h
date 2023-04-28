#pragma once
#include "CoreMinimal.h"
#include "ERsConnectorType.generated.h"

UENUM(BlueprintType)
enum class ERsConnectorType : uint8 {
    Full,
    StartOnly,
    EndOnly,
    None,
};

