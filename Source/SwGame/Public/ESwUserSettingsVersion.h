#pragma once
#include "CoreMinimal.h"
#include "ESwUserSettingsVersion.generated.h"

UENUM(BlueprintType)
enum class ESwUserSettingsVersion : uint8 {
    Launch,
    AddHDREnabled,
};

