#pragma once
#include "CoreMinimal.h"
#include "RsOptionalFloat.generated.h"

USTRUCT(BlueprintType)
struct RSTECHRT_API FRsOptionalFloat {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
public:
    FRsOptionalFloat();
};

