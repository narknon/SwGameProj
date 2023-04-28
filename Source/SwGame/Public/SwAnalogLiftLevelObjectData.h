#pragma once
#include "CoreMinimal.h"
#include "SwAnalogLiftLevelObjectData.generated.h"

USTRUCT(BlueprintType)
struct FSwAnalogLiftLevelObjectData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Duration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldBreakOutOnCompletion;
    
    SWGAME_API FSwAnalogLiftLevelObjectData();
};

