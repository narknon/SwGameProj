#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=RsMapSectionTag -FallbackName=RsMapSectionTag
#include "RsNavAssistGatewayEntry.h"
#include "RsNavAssistQueuedGatewayEntry.generated.h"

USTRUCT(BlueprintType)
struct FRsNavAssistQueuedGatewayEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsNavAssistGatewayEntry entry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsMapSectionTag recordedSection;
    
    RSGAMETECHRT_API FRsNavAssistQueuedGatewayEntry();
};

