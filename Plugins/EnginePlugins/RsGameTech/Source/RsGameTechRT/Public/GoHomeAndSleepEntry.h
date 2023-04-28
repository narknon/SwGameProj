#pragma once
#include "CoreMinimal.h"
#include "GoHomeAndSleepEntry.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct RSGAMETECHRT_API FGoHomeAndSleepEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Actor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HeroAwarenessValue;
    
    FGoHomeAndSleepEntry();
};

