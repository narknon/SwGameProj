#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RsCameraBehavior.h"
#include "R4CameraBehavior_CameraZoom.generated.h"

UCLASS(Blueprintable)
class UR4CameraBehavior_CameraZoom : public URsCameraBehavior {
    GENERATED_BODY()
public:
    UR4CameraBehavior_CameraZoom();
protected:
    UFUNCTION(BlueprintCallable)
    float GetDepthOfFieldFocalDistance(const FVector& StartLocation, const FVector& Direction, float Distance, int32 collisionChannels);
    
};

