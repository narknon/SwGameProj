#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineBaseTypes.h"
#include "RsCharacterDeferredCommandQueueTick.generated.h"

USTRUCT(BlueprintType)
struct FRsCharacterDeferredCommandQueueTick : public FTickFunction {
    GENERATED_BODY()
public:
    RSGAMETECHRT_API FRsCharacterDeferredCommandQueueTick();
};

template<>
struct TStructOpsTypeTraits<FRsCharacterDeferredCommandQueueTick> : public TStructOpsTypeTraitsBase2<FRsCharacterDeferredCommandQueueTick>
{
    enum
    {
        WithCopy = false
    };
};

