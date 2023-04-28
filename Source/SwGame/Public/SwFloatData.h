#pragma once
#include "CoreMinimal.h"
#include "SwFloatData.generated.h"

USTRUCT(BlueprintType)
struct FSwFloatData {
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
    
    SWGAME_API FSwFloatData();
};

