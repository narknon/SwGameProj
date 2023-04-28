#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineBaseTypes.h"
#include "RsClimbComponentPrepareTickFunction.generated.h"

USTRUCT(BlueprintType)
struct FRsClimbComponentPrepareTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    RSGAMETECHRT_API FRsClimbComponentPrepareTickFunction();
};

template<>
struct TStructOpsTypeTraits<FRsClimbComponentPrepareTickFunction> : public TStructOpsTypeTraitsBase2<FRsClimbComponentPrepareTickFunction>
{
    enum
    {
        WithCopy = false
    };
};

