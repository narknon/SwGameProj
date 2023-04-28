#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RsOptionalRotator.generated.h"

USTRUCT(BlueprintType)
struct RSTECHRT_API FRsOptionalRotator {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator Value;
    
public:
    FRsOptionalRotator();
};

