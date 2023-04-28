#pragma once
#include "CoreMinimal.h"
#include "RsPhysicalAnimationBlendingCustomControllerParameters.generated.h"

USTRUCT(BlueprintType)
struct RSGAMETECHRT_API FRsPhysicalAnimationBlendingCustomControllerParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 UseSinusoidalCurveForBlending: 1;
    
    FRsPhysicalAnimationBlendingCustomControllerParameters();
};

