#pragma once
#include "CoreMinimal.h"
#include "RsAILocationSearchStrategy.h"
#include "RsAILocationSearchStrategy_LOS.generated.h"

USTRUCT(BlueprintType)
struct FRsAILocationSearchStrategy_LOS : public FRsAILocationSearchStrategy {
    GENERATED_BODY()
public:
    RSGAMETECHRT_API FRsAILocationSearchStrategy_LOS();
};

