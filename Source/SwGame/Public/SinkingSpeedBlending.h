#pragma once
#include "CoreMinimal.h"
#include "SinkingSpeedBlending.generated.h"

USTRUCT(BlueprintType)
struct FSinkingSpeedBlending {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinimumValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Divisor;
    
    SWGAME_API FSinkingSpeedBlending();
};

