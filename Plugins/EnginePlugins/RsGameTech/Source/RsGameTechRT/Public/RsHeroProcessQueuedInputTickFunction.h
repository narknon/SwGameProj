#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineBaseTypes.h"
#include "RsHeroProcessQueuedInputTickFunction.generated.h"

USTRUCT(BlueprintType)
struct FRsHeroProcessQueuedInputTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    RSGAMETECHRT_API FRsHeroProcessQueuedInputTickFunction();
};

template<>
struct TStructOpsTypeTraits<FRsHeroProcessQueuedInputTickFunction> : public TStructOpsTypeTraitsBase2<FRsHeroProcessQueuedInputTickFunction>
{
    enum
    {
        WithCopy = false
    };
};

