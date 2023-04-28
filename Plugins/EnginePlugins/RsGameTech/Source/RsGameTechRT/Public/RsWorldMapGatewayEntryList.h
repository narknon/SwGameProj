#pragma once
#include "CoreMinimal.h"
#include "RsNavAssistGatewayEntry.h"
#include "RsWorldMapGatewayEntryList.generated.h"

USTRUCT(BlueprintType)
struct FRsWorldMapGatewayEntryList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRsNavAssistGatewayEntry> GatewayActors;
    
    RSGAMETECHRT_API FRsWorldMapGatewayEntryList();
};

