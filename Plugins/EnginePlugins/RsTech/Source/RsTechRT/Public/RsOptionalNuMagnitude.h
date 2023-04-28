#pragma once
#include "CoreMinimal.h"
#include "RsNuMagnitude.h"
#include "RsOptionalNuMagnitude.generated.h"

USTRUCT(BlueprintType)
struct RSTECHRT_API FRsOptionalNuMagnitude {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsNuMagnitude Value;
    
public:
    FRsOptionalNuMagnitude();
};

