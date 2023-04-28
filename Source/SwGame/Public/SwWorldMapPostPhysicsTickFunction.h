#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineBaseTypes.h"
#include "SwWorldMapPostPhysicsTickFunction.generated.h"

USTRUCT(BlueprintType)
struct FSwWorldMapPostPhysicsTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    SWGAME_API FSwWorldMapPostPhysicsTickFunction();
};

template<>
struct TStructOpsTypeTraits<FSwWorldMapPostPhysicsTickFunction> : public TStructOpsTypeTraitsBase2<FSwWorldMapPostPhysicsTickFunction>
{
    enum
    {
        WithCopy = false
    };
};

