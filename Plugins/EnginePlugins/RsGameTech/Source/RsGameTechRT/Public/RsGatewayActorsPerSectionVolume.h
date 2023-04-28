#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=RsMapSectionTag -FallbackName=RsMapSectionTag
#include "RsWorldMapGatewayEntryList.h"
#include "RsGatewayActorsPerSectionVolume.generated.h"

USTRUCT(BlueprintType)
struct FRsGatewayActorsPerSectionVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FRsMapSectionTag, FRsWorldMapGatewayEntryList> GatewayActors;
    
    RSGAMETECHRT_API FRsGatewayActorsPerSectionVolume();
};

