#pragma once
#include "CoreMinimal.h"
#include "ButtonMashSyncGroupParameters.generated.h"

USTRUCT(BlueprintType)
struct FButtonMashSyncGroupParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExpirationTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ButtonMashStartPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ProgressionAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DecayAmountPerSecond;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GracePeriod;
    
    SWGAME_API FButtonMashSyncGroupParameters();
};

