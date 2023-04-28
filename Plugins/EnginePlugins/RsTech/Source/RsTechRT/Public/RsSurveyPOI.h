#pragma once
#include "CoreMinimal.h"
#include "RsGeoLocator.h"
#include "RsSurveyPOI.generated.h"

USTRUCT(BlueprintType)
struct RSTECHRT_API FRsSurveyPOI {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRsGeoLocator Location;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float DistanceToPenetration;
    
    FRsSurveyPOI();
};

