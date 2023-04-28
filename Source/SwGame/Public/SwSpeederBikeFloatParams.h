#pragma once
#include "CoreMinimal.h"
#include "SwSpeederBikeFloatParams.generated.h"

USTRUCT(BlueprintType)
struct SWGAME_API FSwSpeederBikeFloatParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Normal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Boost;
    
    FSwSpeederBikeFloatParams();
};

