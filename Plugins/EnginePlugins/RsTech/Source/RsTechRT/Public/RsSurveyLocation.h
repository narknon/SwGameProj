#pragma once
#include "CoreMinimal.h"
#include "ERsSurveyResult.h"
#include "RsGeoLocator.h"
#include "RsSurveyPOIArray.h"
#include "RsSurveyLocation.generated.h"

USTRUCT(BlueprintType)
struct RSTECHRT_API FRsSurveyLocation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRsGeoLocator Location;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ERsSurveyResult LocationType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRsSurveyPOIArray PointsOfInterest;
    
    FRsSurveyLocation();
};

