#pragma once
#include "CoreMinimal.h"
#include "EZipBaseType.h"
#include "RsNavAssistGatewayEntry.generated.h"

class ARsWorldMapGatewayActor;

USTRUCT(BlueprintType)
struct FRsNavAssistGatewayEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 DepthFromGoal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARsWorldMapGatewayActor* Gateway;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EZipBaseType BaseType;
    
    RSGAMETECHRT_API FRsNavAssistGatewayEntry();
};

