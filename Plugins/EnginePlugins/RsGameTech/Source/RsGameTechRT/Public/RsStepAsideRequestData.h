#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RsStepAsideRequestData.generated.h"

USTRUCT(BlueprintType)
struct RSGAMETECHRT_API FRsStepAsideRequestData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRequestInProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector InitialGoalStepAsideDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CurrentGoalStepAsideDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentGoalStepAsideCompletionTime;
    
    FRsStepAsideRequestData();
};

