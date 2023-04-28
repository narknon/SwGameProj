#pragma once
#include "CoreMinimal.h"
#include "EPhotoModeTweaks.generated.h"

UENUM(BlueprintType)
enum class EPhotoModeTweaks : uint8 {
    PM_Zoom,
    PM_Tilt,
    PM_DOF_Distance,
    PM_DOF_FStop,
    PM_Exposure,
    PM_Vignette,
    PM_FilmGrain,
    PM_ChromaticAberation,
    PM_HidePlayer,
    PM_HideBD1,
    PM_HideEnemyAI,
    PM_HideFriendlyAI,
    PM_Filter,
    PM_FilterStrength,
    PM_SpotLightBrightness,
    PM_SpotLightColorTemperature,
    PM_MAX UMETA(Hidden),
};

