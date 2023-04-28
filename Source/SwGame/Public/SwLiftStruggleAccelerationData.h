#pragma once
#include "CoreMinimal.h"
#include "SwLiftAccelerationData.h"
#include "SwLiftStruggleAccelerationData.generated.h"

USTRUCT(BlueprintType)
struct FSwLiftStruggleAccelerationData : public FSwLiftAccelerationData {
    GENERATED_BODY()
public:
    SWGAME_API FSwLiftStruggleAccelerationData();
};

