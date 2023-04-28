#pragma once
#include "CoreMinimal.h"
#include "ERsCameraIsInputActiveInputType.generated.h"

UENUM(BlueprintType)
enum class ERsCameraIsInputActiveInputType : uint8 {
    LookInput,
    MoveInput,
    LookOrMoveInput,
};

