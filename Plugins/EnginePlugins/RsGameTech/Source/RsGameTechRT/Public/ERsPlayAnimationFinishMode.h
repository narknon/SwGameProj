#pragma once
#include "CoreMinimal.h"
#include "ERsPlayAnimationFinishMode.generated.h"

UENUM(BlueprintType)
enum class ERsPlayAnimationFinishMode : uint8 {
    End,
    BlendOut,
};

