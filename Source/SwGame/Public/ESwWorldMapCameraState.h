#pragma once
#include "CoreMinimal.h"
#include "ESwWorldMapCameraState.generated.h"

UENUM(BlueprintType)
enum class ESwWorldMapCameraState : uint8 {
    None,
    SceneCoordinates,
    SphericalCoordinates,
    InSequencer,
};

