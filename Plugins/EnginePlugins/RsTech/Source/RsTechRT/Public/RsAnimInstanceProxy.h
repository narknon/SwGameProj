#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstanceProxy.h"
#include "RsAnimInstanceProxy.generated.h"

USTRUCT(BlueprintType)
struct RSTECHRT_API FRsAnimInstanceProxy : public FAnimInstanceProxy {
    GENERATED_BODY()
public:
    FRsAnimInstanceProxy();
};

