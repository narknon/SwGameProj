#pragma once
#include "CoreMinimal.h"
#include "SwAnalogFloatLevelObjectData.generated.h"

USTRUCT(BlueprintType)
struct FSwAnalogFloatLevelObjectData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Duration;
    
    SWGAME_API FSwAnalogFloatLevelObjectData();
};

