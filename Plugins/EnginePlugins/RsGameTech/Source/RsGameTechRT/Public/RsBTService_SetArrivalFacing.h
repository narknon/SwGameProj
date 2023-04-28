#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "RsBTService_SetArrivalFacing.generated.h"

UCLASS(Blueprintable)
class URsBTService_SetArrivalFacing : public UBTService {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector RotationKey;
    
public:
    URsBTService_SetArrivalFacing();
};

