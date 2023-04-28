#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SwWorldMapCameraInterpolationData.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct FSwWorldMapCameraInterpolationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* Curve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector StartPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector EndPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EndTime;
    
    SWGAME_API FSwWorldMapCameraInterpolationData();
};

