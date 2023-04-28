#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineBaseTypes.h"
#include "RsWorldTick.generated.h"

USTRUCT(BlueprintType)
struct FRsWorldTick : public FTickFunction {
    GENERATED_BODY()
public:
    RSTECHRT_API FRsWorldTick();
};

template<>
struct TStructOpsTypeTraits<FRsWorldTick> : public TStructOpsTypeTraitsBase2<FRsWorldTick>
{
    enum
    {
        WithCopy = false
    };
};

