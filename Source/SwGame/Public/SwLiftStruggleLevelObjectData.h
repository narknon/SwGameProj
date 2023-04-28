#pragma once
#include "CoreMinimal.h"
#include "SwLiftStruggleAccelerationData.h"
#include "SwLiftStruggleLevelObjectData.generated.h"

USTRUCT(BlueprintType)
struct FSwLiftStruggleLevelObjectData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwLiftStruggleAccelerationData AccelerationData;
    
    SWGAME_API FSwLiftStruggleLevelObjectData();
};

