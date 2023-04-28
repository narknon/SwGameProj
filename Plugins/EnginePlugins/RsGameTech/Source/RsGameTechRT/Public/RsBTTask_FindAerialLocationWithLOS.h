#pragma once
#include "CoreMinimal.h"
#include "RsAILocationSearchStrategy_AerialLOS.h"
#include "RsBTTask_SpatialQueryBase.h"
#include "RsBTTask_FindAerialLocationWithLOS.generated.h"

UCLASS(Blueprintable)
class URsBTTask_FindAerialLocationWithLOS : public URsBTTask_SpatialQueryBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsAILocationSearchStrategy_AerialLOS Strategy;
    
public:
    URsBTTask_FindAerialLocationWithLOS();
};

