#pragma once
#include "CoreMinimal.h"
#include "RsOptionalString.generated.h"

USTRUCT(BlueprintType)
struct RSTECHRT_API FRsOptionalString {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Value;
    
public:
    FRsOptionalString();
};

