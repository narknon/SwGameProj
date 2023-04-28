#pragma once
#include "CoreMinimal.h"
#include "RsAIHearingAwarenessEventData.generated.h"

USTRUCT(BlueprintType)
struct RSGAMETECHRT_API FRsAIHearingAwarenessEventData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AwarenessValue;
    
    FRsAIHearingAwarenessEventData();
};

