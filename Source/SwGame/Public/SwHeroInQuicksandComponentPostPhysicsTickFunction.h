#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineBaseTypes.h"
#include "SwHeroInQuicksandComponentPostPhysicsTickFunction.generated.h"

USTRUCT(BlueprintType)
struct FSwHeroInQuicksandComponentPostPhysicsTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    SWGAME_API FSwHeroInQuicksandComponentPostPhysicsTickFunction();
};

template<>
struct TStructOpsTypeTraits<FSwHeroInQuicksandComponentPostPhysicsTickFunction> : public TStructOpsTypeTraitsBase2<FSwHeroInQuicksandComponentPostPhysicsTickFunction>
{
    enum
    {
        WithCopy = false
    };
};

