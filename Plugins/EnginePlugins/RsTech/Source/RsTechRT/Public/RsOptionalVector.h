#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RsOptionalVector.generated.h"

USTRUCT(BlueprintType)
struct RSTECHRT_API FRsOptionalVector {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Value;
    
public:
    FRsOptionalVector();
};

