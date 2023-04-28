#pragma once
#include "CoreMinimal.h"
#include "SwWorldMapOutlineScalingData.generated.h"

USTRUCT(BlueprintType)
struct FSwWorldMapOutlineScalingData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OffsetAmount;
    
    SWGAME_API FSwWorldMapOutlineScalingData();
};

