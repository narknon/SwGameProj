#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineBaseTypes.h"
#include "RsAbilitySystemTickFunction.generated.h"

USTRUCT(BlueprintType)
struct FRsAbilitySystemTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    SWGAME_API FRsAbilitySystemTickFunction();
};

template<>
struct TStructOpsTypeTraits<FRsAbilitySystemTickFunction> : public TStructOpsTypeTraitsBase2<FRsAbilitySystemTickFunction>
{
    enum
    {
        WithCopy = false
    };
};

