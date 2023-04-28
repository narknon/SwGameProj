#pragma once
#include "CoreMinimal.h"
#include "Engine/DebugCameraController.h"
#include "SwDebugCameraController.generated.h"

UCLASS(Blueprintable)
class ASwDebugCameraController : public ADebugCameraController {
    GENERATED_BODY()
public:
    ASwDebugCameraController();
};

