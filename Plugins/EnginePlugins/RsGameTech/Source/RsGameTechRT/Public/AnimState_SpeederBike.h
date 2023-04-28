#pragma once
#include "CoreMinimal.h"
#include "AnimState_SpeederBike.generated.h"

USTRUCT(BlueprintType)
struct FAnimState_SpeederBike {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InputBasedSteeringValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SmoothedSteeringValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsSpeedBoostActive;
    
    RSGAMETECHRT_API FAnimState_SpeederBike();
};

