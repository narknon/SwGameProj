#pragma once
#include "CoreMinimal.h"
#include "SwSpeederBikeWallCollisionInfo.h"
#include "SwSplineSpeederBikeDrivingComponentOnWallCollisionDelegate.generated.h"

class UPrimitiveComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSwSplineSpeederBikeDrivingComponentOnWallCollision, UPrimitiveComponent*, Collider, const FSwSpeederBikeWallCollisionInfo&, Info);

