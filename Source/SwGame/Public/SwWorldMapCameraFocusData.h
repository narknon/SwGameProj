#pragma once
#include "CoreMinimal.h"
#include "SwWorldMapCameraFocusData.generated.h"

USTRUCT(BlueprintType)
struct FSwWorldMapCameraFocusData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Distance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PolarAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AzimuthAngle;
    
    SWGAME_API FSwWorldMapCameraFocusData();
};

