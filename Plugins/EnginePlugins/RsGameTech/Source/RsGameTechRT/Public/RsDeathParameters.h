#pragma once
#include "CoreMinimal.h"
#include "ERsCharacterDeath.h"
#include "RsDirectionAnimationParameters.h"
#include "RsDeathParameters.generated.h"

USTRUCT(BlueprintType)
struct FRsDeathParameters : public FRsDirectionAnimationParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERsCharacterDeath DeathType;
    
    RSGAMETECHRT_API FRsDeathParameters();
};

