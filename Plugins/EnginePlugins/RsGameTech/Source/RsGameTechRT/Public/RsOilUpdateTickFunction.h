#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineBaseTypes.h"
#include "RsOilUpdateTickFunction.generated.h"

USTRUCT(BlueprintType)
struct FRsOilUpdateTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    RSGAMETECHRT_API FRsOilUpdateTickFunction();
};

template<>
struct TStructOpsTypeTraits<FRsOilUpdateTickFunction> : public TStructOpsTypeTraitsBase2<FRsOilUpdateTickFunction>
{
    enum
    {
        WithCopy = false
    };
};

