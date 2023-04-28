#pragma once
#include "CoreMinimal.h"
#include "SwSphericalCoordinateTargetData.h"
#include "SwPlanetMapCameraTransitionData.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct FSwPlanetMapCameraTransitionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ZoomDistanceToTriggerSectorMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwSphericalCoordinateTargetData SectorCameraTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ZoomDistanceToTriggerLocalMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwSphericalCoordinateTargetData LocalCameraTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ZoomDistanceToTriggerLeavingInteriorMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwSphericalCoordinateTargetData InteriorCameraTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TransitionDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* TransitionCurve;
    
    SWGAME_API FSwPlanetMapCameraTransitionData();
};

