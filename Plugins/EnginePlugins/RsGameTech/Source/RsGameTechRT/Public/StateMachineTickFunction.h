#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineBaseTypes.h"
#include "StateMachineTickFunction.generated.h"

USTRUCT(BlueprintType)
struct FStateMachineTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    RSGAMETECHRT_API FStateMachineTickFunction();
};

template<>
struct TStructOpsTypeTraits<FStateMachineTickFunction> : public TStructOpsTypeTraitsBase2<FStateMachineTickFunction>
{
    enum
    {
        WithCopy = false
    };
};

