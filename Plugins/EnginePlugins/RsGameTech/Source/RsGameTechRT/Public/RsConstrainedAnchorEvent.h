#pragma once
#include "CoreMinimal.h"
#include "RsConstrainedAnchorEvent.generated.h"

USTRUCT(BlueprintType)
struct FRsConstrainedAnchorEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Duration;
    
    RSGAMETECHRT_API FRsConstrainedAnchorEvent();
};

