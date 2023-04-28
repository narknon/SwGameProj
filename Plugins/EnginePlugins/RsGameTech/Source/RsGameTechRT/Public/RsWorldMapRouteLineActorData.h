#pragma once
#include "CoreMinimal.h"
#include "RsWorldMapRouteLineActorData.generated.h"

class ARsWorldMapRouteLineActor;

USTRUCT(BlueprintType)
struct FRsWorldMapRouteLineActorData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARsWorldMapRouteLineActor* RouteLine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsReversed;
    
    RSGAMETECHRT_API FRsWorldMapRouteLineActorData();
};

