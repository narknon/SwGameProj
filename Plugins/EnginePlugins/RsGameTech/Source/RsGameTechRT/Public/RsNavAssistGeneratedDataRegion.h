#pragma once
#include "CoreMinimal.h"
#include "RsWorldMapGatewayEntryListManual.h"
#include "RsNavAssistGeneratedDataRegion.generated.h"

USTRUCT(BlueprintType)
struct FRsNavAssistGeneratedDataRegion {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RegionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRsWorldMapGatewayEntryListManual> ItemGateways;
    
    RSGAMETECHRT_API FRsNavAssistGeneratedDataRegion();
};

