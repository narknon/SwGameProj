#pragma once
#include "CoreMinimal.h"
#include "SwBendingMetalDoorOcillationParameters.generated.h"

USTRUCT(BlueprintType)
struct SWGAME_API FSwBendingMetalDoorOcillationParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OscillationAmplitude;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OscillationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OscillationLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartOscillationWhenMovementSpeedIsBelow;
    
    FSwBendingMetalDoorOcillationParameters();
};

