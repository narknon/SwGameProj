#pragma once
#include "CoreMinimal.h"
#include "ERsAIPOIAnimSection.generated.h"

UENUM(BlueprintType)
enum class ERsAIPOIAnimSection : uint8 {
    None,
    Loop,
    Exit,
};

