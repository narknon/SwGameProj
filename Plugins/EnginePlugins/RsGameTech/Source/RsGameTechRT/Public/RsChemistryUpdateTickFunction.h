#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineBaseTypes.h"
#include "RsChemistryUpdateTickFunction.generated.h"

USTRUCT(BlueprintType)
struct FRsChemistryUpdateTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    RSGAMETECHRT_API FRsChemistryUpdateTickFunction();
};

template<>
struct TStructOpsTypeTraits<FRsChemistryUpdateTickFunction> : public TStructOpsTypeTraitsBase2<FRsChemistryUpdateTickFunction>
{
    enum
    {
        WithCopy = false
    };
};

