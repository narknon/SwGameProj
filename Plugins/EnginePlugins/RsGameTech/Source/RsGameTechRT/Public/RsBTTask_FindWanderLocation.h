#pragma once
#include "CoreMinimal.h"
#include "RsBTTask_SpatialQueryBase.h"
#include "RsBTTask_FindWanderLocation.generated.h"

UCLASS(Blueprintable)
class URsBTTask_FindWanderLocation : public URsBTTask_SpatialQueryBase {
    GENERATED_BODY()
public:
    URsBTTask_FindWanderLocation();
};

