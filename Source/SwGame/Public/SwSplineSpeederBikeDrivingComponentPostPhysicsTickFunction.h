#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineBaseTypes.h"
#include "SwSplineSpeederBikeDrivingComponentPostPhysicsTickFunction.generated.h"

USTRUCT(BlueprintType)
struct FSwSplineSpeederBikeDrivingComponentPostPhysicsTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    SWGAME_API FSwSplineSpeederBikeDrivingComponentPostPhysicsTickFunction();
};

template<>
struct TStructOpsTypeTraits<FSwSplineSpeederBikeDrivingComponentPostPhysicsTickFunction> : public TStructOpsTypeTraitsBase2<FSwSplineSpeederBikeDrivingComponentPostPhysicsTickFunction>
{
    enum
    {
        WithCopy = false
    };
};

