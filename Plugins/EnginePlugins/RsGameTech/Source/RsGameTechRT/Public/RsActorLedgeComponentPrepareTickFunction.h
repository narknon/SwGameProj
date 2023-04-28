#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineBaseTypes.h"
#include "RsActorLedgeComponentPrepareTickFunction.generated.h"

USTRUCT(BlueprintType)
struct FRsActorLedgeComponentPrepareTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    RSGAMETECHRT_API FRsActorLedgeComponentPrepareTickFunction();
};

template<>
struct TStructOpsTypeTraits<FRsActorLedgeComponentPrepareTickFunction> : public TStructOpsTypeTraitsBase2<FRsActorLedgeComponentPrepareTickFunction>
{
    enum
    {
        WithCopy = false
    };
};

