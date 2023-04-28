#pragma once
#include "CoreMinimal.h"
#include "EZipBaseType.h"
#include "RsNavAssistGatewayEntryManual.generated.h"

USTRUCT(BlueprintType)
struct FRsNavAssistGatewayEntryManual {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 DepthFromGoal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName GatewayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EZipBaseType BaseType;
    
    RSGAMETECHRT_API FRsNavAssistGatewayEntryManual();
};

