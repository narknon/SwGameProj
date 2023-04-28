#pragma once
#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "SwPhotomodeCameraHUD.generated.h"

UCLASS(Blueprintable, HideDropdown, NonTransient)
class ASwPhotomodeCameraHUD : public AHUD {
    GENERATED_BODY()
public:
    ASwPhotomodeCameraHUD();
};

