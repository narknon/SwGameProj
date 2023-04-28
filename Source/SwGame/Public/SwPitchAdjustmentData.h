#pragma once
#include "CoreMinimal.h"
#include "SwPitchAdjustmentData.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct FSwPitchAdjustmentData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* RemapCurve;
    
    SWGAME_API FSwPitchAdjustmentData();
};

