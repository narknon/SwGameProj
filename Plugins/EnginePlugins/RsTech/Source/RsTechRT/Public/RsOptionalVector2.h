#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RsOptionalVector2.generated.h"

USTRUCT(BlueprintType)
struct RSTECHRT_API FRsOptionalVector2 {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D Value;
    
public:
    FRsOptionalVector2();
};

