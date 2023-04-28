#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RsOptionalVector4.generated.h"

USTRUCT(BlueprintType)
struct RSTECHRT_API FRsOptionalVector4 {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector4 Value;
    
public:
    FRsOptionalVector4();
};

