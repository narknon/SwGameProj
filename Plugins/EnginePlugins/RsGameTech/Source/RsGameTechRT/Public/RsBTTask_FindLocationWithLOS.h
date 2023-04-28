#pragma once
#include "CoreMinimal.h"
#include "RsAILocationSearchStrategy_LOS.h"
#include "RsBTTask_SpatialQueryBase.h"
#include "RsBTTask_FindLocationWithLOS.generated.h"

UCLASS(Blueprintable)
class URsBTTask_FindLocationWithLOS : public URsBTTask_SpatialQueryBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsAILocationSearchStrategy_LOS Strategy;
    
public:
    URsBTTask_FindLocationWithLOS();
};

