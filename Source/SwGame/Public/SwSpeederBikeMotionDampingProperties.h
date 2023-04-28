#pragma once
#include "CoreMinimal.h"
#include "SwSpeederBikeMotionDampingProperties.generated.h"

USTRUCT(BlueprintType)
struct SWGAME_API FSwSpeederBikeMotionDampingProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LinearMotionDamping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LinearMotionDampingWithoutDriver;
    
    FSwSpeederBikeMotionDampingProperties();
};

