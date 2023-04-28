#pragma once
#include "CoreMinimal.h"
#include "RsOptionalInt32.generated.h"

USTRUCT(BlueprintType)
struct RSTECHRT_API FRsOptionalInt32 {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Value;
    
public:
    FRsOptionalInt32();
};

