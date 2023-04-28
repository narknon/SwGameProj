#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "RsAIStepAsideBehaviorParametersData.h"
#include "RsAIStepAsideBehaviorParameters.generated.h"

UCLASS(Blueprintable)
class URsAIStepAsideBehaviorParameters : public UDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsAIStepAsideBehaviorParametersData Data;
    
public:
    URsAIStepAsideBehaviorParameters();
};

