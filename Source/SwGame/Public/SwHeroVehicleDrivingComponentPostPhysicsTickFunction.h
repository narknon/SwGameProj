#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineBaseTypes.h"
#include "SwHeroVehicleDrivingComponentPostPhysicsTickFunction.generated.h"

USTRUCT(BlueprintType)
struct FSwHeroVehicleDrivingComponentPostPhysicsTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    SWGAME_API FSwHeroVehicleDrivingComponentPostPhysicsTickFunction();
};

template<>
struct TStructOpsTypeTraits<FSwHeroVehicleDrivingComponentPostPhysicsTickFunction> : public TStructOpsTypeTraitsBase2<FSwHeroVehicleDrivingComponentPostPhysicsTickFunction>
{
    enum
    {
        WithCopy = false
    };
};

