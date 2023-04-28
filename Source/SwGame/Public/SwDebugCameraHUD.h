#pragma once
#include "CoreMinimal.h"
#include "Engine/DebugCameraHUD.h"
#include "SwDebugCameraHUD.generated.h"

UCLASS(Blueprintable, HideDropdown, NonTransient)
class ASwDebugCameraHUD : public ADebugCameraHUD {
    GENERATED_BODY()
public:
    ASwDebugCameraHUD();
};

