#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineBaseTypes.h"
#include "RsCharacterDamageDataClearTickFunction.generated.h"

USTRUCT(BlueprintType)
struct FRsCharacterDamageDataClearTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    RSGAMETECHRT_API FRsCharacterDamageDataClearTickFunction();
};

template<>
struct TStructOpsTypeTraits<FRsCharacterDamageDataClearTickFunction> : public TStructOpsTypeTraitsBase2<FRsCharacterDamageDataClearTickFunction>
{
    enum
    {
        WithCopy = false
    };
};

