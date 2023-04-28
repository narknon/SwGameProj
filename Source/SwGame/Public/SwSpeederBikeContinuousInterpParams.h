#pragma once
#include "CoreMinimal.h"
#include "RsContinuousInterpParams.h"
#include "SwSpeederBikeContinuousInterpParams.generated.h"

USTRUCT(BlueprintType)
struct SWGAME_API FSwSpeederBikeContinuousInterpParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsContinuousInterpParams Normal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsContinuousInterpParams Boost;
    
    FSwSpeederBikeContinuousInterpParams();
};

