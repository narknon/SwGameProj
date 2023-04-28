#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstanceProxy.h"
#include "RsIKAnimInstanceProxy.generated.h"

USTRUCT(BlueprintType)
struct RSGAMETECHRT_API FRsIKAnimInstanceProxy : public FAnimInstanceProxy {
    GENERATED_BODY()
public:
    FRsIKAnimInstanceProxy();
};

