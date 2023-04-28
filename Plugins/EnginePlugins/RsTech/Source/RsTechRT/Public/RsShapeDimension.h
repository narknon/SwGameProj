#pragma once
#include "CoreMinimal.h"
#include "RsShapeDimension.generated.h"

USTRUCT(BlueprintType)
struct RSTECHRT_API FRsShapeDimension {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HalfHeight;
    
    FRsShapeDimension();
};

