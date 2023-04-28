#pragma once
#include "CoreMinimal.h"
#include "ERsUiInputActionType.generated.h"

UENUM(BlueprintType)
enum class ERsUiInputActionType : uint8 {
    Accept,
    Cancel,
    Navigate,
    Dynamic,
};

