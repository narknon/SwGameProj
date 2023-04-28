#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineBaseTypes.h"
#include "StartHavokClothSimulationFunction.generated.h"

USTRUCT(BlueprintType)
struct FStartHavokClothSimulationFunction : public FTickFunction {
    GENERATED_BODY()
public:
    HAVOKCLOTH_API FStartHavokClothSimulationFunction();
};

template<>
struct TStructOpsTypeTraits<FStartHavokClothSimulationFunction> : public TStructOpsTypeTraitsBase2<FStartHavokClothSimulationFunction>
{
    enum
    {
        WithCopy = false
    };
};

