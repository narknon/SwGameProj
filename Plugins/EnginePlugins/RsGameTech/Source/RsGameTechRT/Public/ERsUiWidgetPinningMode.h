#pragma once
#include "CoreMinimal.h"
#include "ERsUiWidgetPinningMode.generated.h"

UENUM(BlueprintType)
enum class ERsUiWidgetPinningMode : uint8 {
    Hybrid,
    ProjectivePositioning,
    DirectionClamping,
};

