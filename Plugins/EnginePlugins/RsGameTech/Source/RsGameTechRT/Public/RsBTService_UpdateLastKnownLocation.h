#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "RsBTService_UpdateLastKnownLocation.generated.h"

UCLASS(Blueprintable)
class URsBTService_UpdateLastKnownLocation : public UBTService {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector LastKnownLocationKey;
    
public:
    URsBTService_UpdateLastKnownLocation();
};

