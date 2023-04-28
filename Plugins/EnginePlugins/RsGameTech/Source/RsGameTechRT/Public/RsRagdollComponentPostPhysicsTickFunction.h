#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineBaseTypes.h"
#include "RsRagdollComponentPostPhysicsTickFunction.generated.h"

USTRUCT(BlueprintType)
struct FRsRagdollComponentPostPhysicsTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    RSGAMETECHRT_API FRsRagdollComponentPostPhysicsTickFunction();
};

template<>
struct TStructOpsTypeTraits<FRsRagdollComponentPostPhysicsTickFunction> : public TStructOpsTypeTraitsBase2<FRsRagdollComponentPostPhysicsTickFunction>
{
    enum
    {
        WithCopy = false
    };
};

