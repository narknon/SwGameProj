#pragma once
#include "CoreMinimal.h"
#include "SwAnalogSlamLevelObjectData.generated.h"

USTRUCT(BlueprintType)
struct FSwAnalogSlamLevelObjectData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Duration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldBreakOutOnCompletion;
    
    SWGAME_API FSwAnalogSlamLevelObjectData();
};

