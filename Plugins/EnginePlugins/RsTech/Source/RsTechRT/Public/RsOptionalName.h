#pragma once
#include "CoreMinimal.h"
#include "RsOptionalName.generated.h"

USTRUCT(BlueprintType)
struct RSTECHRT_API FRsOptionalName {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Value;
    
public:
    FRsOptionalName();
};

