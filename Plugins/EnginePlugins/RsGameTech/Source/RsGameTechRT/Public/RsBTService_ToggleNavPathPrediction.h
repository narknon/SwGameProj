#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "RsBTService_ToggleNavPathPrediction.generated.h"

UCLASS(Blueprintable)
class URsBTService_ToggleNavPathPrediction : public UBTService {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bEnabledDuringService: 1;
    
    URsBTService_ToggleNavPathPrediction();
};

