#pragma once
#include "CoreMinimal.h"
#include "SwLiftFloatData.generated.h"

USTRUCT(BlueprintType)
struct FSwLiftFloatData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InitialSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AttractionSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RandomAngularSpeedLow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RandomAngularSpeedHigh;
    
    SWGAME_API FSwLiftFloatData();
};

