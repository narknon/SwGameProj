#pragma once
#include "CoreMinimal.h"
#include "ERsTopologyMode.h"
#include "RsGeoLocator.h"
#include "RsTopology.generated.h"

USTRUCT(BlueprintType)
struct RSTECHRT_API FRsTopology {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsGeoLocator Locator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Proximity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERsTopologyMode Mode;
    
    FRsTopology();
};

