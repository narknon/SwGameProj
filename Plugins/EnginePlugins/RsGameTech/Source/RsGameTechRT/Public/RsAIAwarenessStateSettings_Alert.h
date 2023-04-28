#pragma once
#include "CoreMinimal.h"
#include "RsAIAwarenessStateSettings_Alert.generated.h"

USTRUCT(BlueprintType)
struct RSGAMETECHRT_API FRsAIAwarenessStateSettings_Alert {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinCooldownTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxCooldownTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinBaseDelayForDefaultReaction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxBaseDelayForDefaultReaction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinDistanceDelayForDefaultReaction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDistanceDelayForDefaultReaction;
    
    FRsAIAwarenessStateSettings_Alert();
};

