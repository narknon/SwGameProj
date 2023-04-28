#pragma once
#include "CoreMinimal.h"
#include "RsAILocationSearchStrategy_Jump.h"
#include "RsBTTask_SpatialQueryBase.h"
#include "RsBTTask_FindJumpLocation.generated.h"

UCLASS(Blueprintable)
class URsBTTask_FindJumpLocation : public URsBTTask_SpatialQueryBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsAILocationSearchStrategy_Jump Strategy;
    
public:
    URsBTTask_FindJumpLocation();
};

