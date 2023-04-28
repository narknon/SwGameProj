#pragma once
#include "CoreMinimal.h"
#include "ERsUiInputDeviceType.generated.h"

UENUM(BlueprintType)
enum class ERsUiInputDeviceType : uint8 {
    MouseAndKeyboard,
    XboxController,
    DualshockController,
    DualsenseController,
};

