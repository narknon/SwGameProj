#pragma once
#include "CoreMinimal.h"
#include "ERsCameraEaseFunction.h"
#include "RsCameraEaseParams.generated.h"

USTRUCT(BlueprintType)
struct RSGAMETECHRT_API FRsCameraEaseParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERsCameraEaseFunction EaseFunction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Exponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TangentIn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TangentOut;
    
    FRsCameraEaseParams();
};

