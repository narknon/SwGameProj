#pragma once
#include "CoreMinimal.h"
#include "RsParryConditions.generated.h"

USTRUCT(BlueprintType)
struct FRsParryConditions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Timeout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxAngleCosine;
    
    RSGAMETECHRT_API FRsParryConditions();
};

