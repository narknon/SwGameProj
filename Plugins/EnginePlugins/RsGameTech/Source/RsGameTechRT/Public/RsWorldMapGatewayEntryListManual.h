#pragma once
#include "CoreMinimal.h"
#include "RsNavAssistGatewayEntryManual.h"
#include "RsWorldMapGatewayEntryListManual.generated.h"

USTRUCT(BlueprintType)
struct FRsWorldMapGatewayEntryListManual {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRsNavAssistGatewayEntryManual> GatewayActors;
    
    RSGAMETECHRT_API FRsWorldMapGatewayEntryListManual();
};

