#pragma once
#include "CoreMinimal.h"
#include "RsContinuousInterpParams.generated.h"

USTRUCT(BlueprintType)
struct RSGAMETECHRT_API FRsContinuousInterpParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Percentage;
    
    FRsContinuousInterpParams();
};

