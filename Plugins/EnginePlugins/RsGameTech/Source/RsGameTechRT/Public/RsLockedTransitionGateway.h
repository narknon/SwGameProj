#pragma once
#include "CoreMinimal.h"
#include "RsLockedTransitionGateway.generated.h"

class ARsWorldMapStateTransitionGatewayActor;

USTRUCT(BlueprintType)
struct FRsLockedTransitionGateway {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARsWorldMapStateTransitionGatewayActor* lockedGate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARsWorldMapStateTransitionGatewayActor* unlocker;
    
    RSGAMETECHRT_API FRsLockedTransitionGateway();
};

