#pragma once
#include "CoreMinimal.h"
#include "ERsAttackerDirection.generated.h"

UENUM(BlueprintType)
enum class ERsAttackerDirection : uint8 {
    None,
    Front,
    Left,
    Right,
    Back,
};

