#pragma once
#include "CoreMinimal.h"
#include "RsRange.generated.h"

USTRUCT(BlueprintType)
struct RSTECHRT_API FRsRange {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Start;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float End;
    
    FRsRange();
};

