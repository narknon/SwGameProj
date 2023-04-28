#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineBaseTypes.h"
#include "RsPhysicalAnimationComponentPostPhysicsTickFunction.generated.h"

USTRUCT(BlueprintType)
struct FRsPhysicalAnimationComponentPostPhysicsTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    RSGAMETECHRT_API FRsPhysicalAnimationComponentPostPhysicsTickFunction();
};

template<>
struct TStructOpsTypeTraits<FRsPhysicalAnimationComponentPostPhysicsTickFunction> : public TStructOpsTypeTraitsBase2<FRsPhysicalAnimationComponentPostPhysicsTickFunction>
{
    enum
    {
        WithCopy = false
    };
};

