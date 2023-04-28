#pragma once
#include "CoreMinimal.h"
#include "RsBTTask_SpatialQueryBase.h"
#include "RsBTTask_FindFleeLocation.generated.h"

UCLASS(Blueprintable)
class URsBTTask_FindFleeLocation : public URsBTTask_SpatialQueryBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDistance;
    
public:
    URsBTTask_FindFleeLocation();
};

