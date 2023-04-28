#pragma once
#include "CoreMinimal.h"
#include "ERsFootType.generated.h"

UENUM(BlueprintType)
enum class ERsFootType : uint8 {
    LeftFoot,
    RightFoot,
    BackLeftFoot,
    BackRightFoot,
    Count,
    None = 0x20,
};

