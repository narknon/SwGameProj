#pragma once
#include "CoreMinimal.h"
#include "ERsCameraEaseFunction.generated.h"

UENUM(BlueprintType)
enum class ERsCameraEaseFunction : uint8 {
    Linear,
    SinIn,
    SinOut,
    SinInOut,
    EaseIn,
    EaseOut,
    EaseInOut,
    ExpoIn,
    ExpoOut,
    ExpoInOut,
    CircularIn,
    CircularOut,
    CircularInOut,
    SmoothStep,
    Hermite,
};

