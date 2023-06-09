#pragma once
#include "CoreMinimal.h"
#include "Camera/CameraComponent.h"
#include "SwWorldMapCameraComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SWGAME_API USwWorldMapCameraComponent : public UCameraComponent {
    GENERATED_BODY()
public:
    USwWorldMapCameraComponent();
};

