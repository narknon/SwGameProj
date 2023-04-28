#pragma once
#include "CoreMinimal.h"
#include "RsAnimInstanceProxy.h"
#include "RsGameAnimInstanceProxy.generated.h"

USTRUCT(BlueprintType)
struct RSGAMETECHRT_API FRsGameAnimInstanceProxy : public FRsAnimInstanceProxy {
    GENERATED_BODY()
public:
    FRsGameAnimInstanceProxy();
};

