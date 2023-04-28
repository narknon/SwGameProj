#pragma once
#include "CoreMinimal.h"
#include "RsStaminaConditions.generated.h"

USTRUCT(BlueprintType)
struct FRsStaminaConditions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TotalAmount;
    
    RSGAMETECHRT_API FRsStaminaConditions();
};

