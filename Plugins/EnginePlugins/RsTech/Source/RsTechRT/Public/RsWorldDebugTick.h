#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineBaseTypes.h"
#include "RsWorldDebugTick.generated.h"

USTRUCT(BlueprintType)
struct FRsWorldDebugTick : public FTickFunction {
    GENERATED_BODY()
public:
    RSTECHRT_API FRsWorldDebugTick();
};

template<>
struct TStructOpsTypeTraits<FRsWorldDebugTick> : public TStructOpsTypeTraitsBase2<FRsWorldDebugTick>
{
    enum
    {
        WithCopy = false
    };
};

