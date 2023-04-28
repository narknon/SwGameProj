#pragma once
#include "CoreMinimal.h"
#include "ERsHitPauseType.h"
#include "RsHitPause.generated.h"

USTRUCT(BlueprintType)
struct RSGAMETECHRT_API FRsHitPause {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERsHitPauseType HitPauseType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Duration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AnimRate;
    
    FRsHitPause();
};

