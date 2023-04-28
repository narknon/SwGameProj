#pragma once
#include "CoreMinimal.h"
#include "RsWorldMapGatewayActorList.generated.h"

class ARsWorldMapGatewayActor;

USTRUCT(BlueprintType)
struct FRsWorldMapGatewayActorList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ARsWorldMapGatewayActor*> GatewayActors;
    
    RSGAMETECHRT_API FRsWorldMapGatewayActorList();
};

