#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineBaseTypes.h"
#include "EndHavokClothSimulationFunction.generated.h"

USTRUCT(BlueprintType)
struct FEndHavokClothSimulationFunction : public FTickFunction {
    GENERATED_BODY()
public:
    HAVOKCLOTH_API FEndHavokClothSimulationFunction();
};

template<>
struct TStructOpsTypeTraits<FEndHavokClothSimulationFunction> : public TStructOpsTypeTraitsBase2<FEndHavokClothSimulationFunction>
{
    enum
    {
        WithCopy = false
    };
};

