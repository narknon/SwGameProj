#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RsNuMagnitude.generated.h"

USTRUCT(BlueprintType)
struct RSTECHRT_API FRsNuMagnitude {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Negative;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Positive;
    
    FRsNuMagnitude();
};

