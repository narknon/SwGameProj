#pragma once
#include "CoreMinimal.h"
#include "SwAnalogRetractLevelObjectData.generated.h"

USTRUCT(BlueprintType)
struct FSwAnalogRetractLevelObjectData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Duration;
    
    SWGAME_API FSwAnalogRetractLevelObjectData();
};

