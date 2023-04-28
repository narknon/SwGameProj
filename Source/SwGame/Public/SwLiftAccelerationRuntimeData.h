#pragma once
#include "CoreMinimal.h"
#include "SwLiftAccelerationRuntimeData.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct FSwLiftAccelerationRuntimeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* AccelerationCurve;
    
    SWGAME_API FSwLiftAccelerationRuntimeData();
};

