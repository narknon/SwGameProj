#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SwSpeederBikeRotatorParams.generated.h"

USTRUCT(BlueprintType)
struct SWGAME_API FSwSpeederBikeRotatorParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator Normal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator Boost;
    
    FSwSpeederBikeRotatorParams();
};

