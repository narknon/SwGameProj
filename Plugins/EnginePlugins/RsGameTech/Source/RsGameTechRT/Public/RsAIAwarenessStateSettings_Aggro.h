#pragma once
#include "CoreMinimal.h"
#include "RsAIAwarenessStateSettings_Aggro.generated.h"

USTRUCT(BlueprintType)
struct RSGAMETECHRT_API FRsAIAwarenessStateSettings_Aggro {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinCooldownTimeWhenThreatsPresent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxCooldownTimeWhenThreatsPresent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinCooldownTimeWhenNoThreats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxCooldownTimeWhenNoThreats;
    
    FRsAIAwarenessStateSettings_Aggro();
};

