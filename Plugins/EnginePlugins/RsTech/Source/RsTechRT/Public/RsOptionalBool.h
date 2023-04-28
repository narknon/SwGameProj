#pragma once
#include "CoreMinimal.h"
#include "RsOptionalBool.generated.h"

USTRUCT(BlueprintType)
struct RSTECHRT_API FRsOptionalBool {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Value;
    
public:
    FRsOptionalBool();
};

