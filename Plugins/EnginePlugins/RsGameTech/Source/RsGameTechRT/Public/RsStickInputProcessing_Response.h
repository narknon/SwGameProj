#pragma once
#include "CoreMinimal.h"
#include "ERsStickInputProcessingResponseType.h"
#include "RsStickInputProcessing_Response.generated.h"

USTRUCT(BlueprintType)
struct RSGAMETECHRT_API FRsStickInputProcessing_Response {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERsStickInputProcessingResponseType ResponseType;
    
    FRsStickInputProcessing_Response();
};

