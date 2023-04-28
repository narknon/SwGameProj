#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineBaseTypes.h"
#include "RsPlayerControllerInputTick.generated.h"

USTRUCT(BlueprintType)
struct FRsPlayerControllerInputTick : public FTickFunction {
    GENERATED_BODY()
public:
    RSGAMETECHRT_API FRsPlayerControllerInputTick();
};

template<>
struct TStructOpsTypeTraits<FRsPlayerControllerInputTick> : public TStructOpsTypeTraitsBase2<FRsPlayerControllerInputTick>
{
    enum
    {
        WithCopy = false
    };
};

