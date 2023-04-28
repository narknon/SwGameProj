#pragma once
#include "CoreMinimal.h"
#include "RsCameraSpringParams.generated.h"

USTRUCT(BlueprintType)
struct RSGAMETECHRT_API FRsCameraSpringParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpringConstant;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Damping;
    
    FRsCameraSpringParams();
};

