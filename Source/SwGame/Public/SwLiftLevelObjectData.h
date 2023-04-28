#pragma once
#include "CoreMinimal.h"
#include "SwLiftAccelerationData.h"
#include "SwLiftLevelObjectData.generated.h"

USTRUCT(BlueprintType)
struct FSwLiftLevelObjectData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwLiftAccelerationData AccelerationData;
    
    SWGAME_API FSwLiftLevelObjectData();
};

