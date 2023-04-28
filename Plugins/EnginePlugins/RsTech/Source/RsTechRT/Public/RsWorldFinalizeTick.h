#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineBaseTypes.h"
#include "RsWorldFinalizeTick.generated.h"

USTRUCT(BlueprintType)
struct FRsWorldFinalizeTick : public FTickFunction {
    GENERATED_BODY()
public:
    RSTECHRT_API FRsWorldFinalizeTick();
};

template<>
struct TStructOpsTypeTraits<FRsWorldFinalizeTick> : public TStructOpsTypeTraitsBase2<FRsWorldFinalizeTick>
{
    enum
    {
        WithCopy = false
    };
};

