#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineBaseTypes.h"
#include "RsCharacterFoliageStateTickFunction.generated.h"

USTRUCT(BlueprintType)
struct FRsCharacterFoliageStateTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    RSGAMETECHRT_API FRsCharacterFoliageStateTickFunction();
};

template<>
struct TStructOpsTypeTraits<FRsCharacterFoliageStateTickFunction> : public TStructOpsTypeTraitsBase2<FRsCharacterFoliageStateTickFunction>
{
    enum
    {
        WithCopy = false
    };
};

