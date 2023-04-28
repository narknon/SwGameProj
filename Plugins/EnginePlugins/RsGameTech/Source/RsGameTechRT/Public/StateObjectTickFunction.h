#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineBaseTypes.h"
#include "StateObjectTickFunction.generated.h"

USTRUCT(BlueprintType)
struct FStateObjectTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    RSGAMETECHRT_API FStateObjectTickFunction();
};

template<>
struct TStructOpsTypeTraits<FStateObjectTickFunction> : public TStructOpsTypeTraitsBase2<FStateObjectTickFunction>
{
    enum
    {
        WithCopy = false
    };
};

