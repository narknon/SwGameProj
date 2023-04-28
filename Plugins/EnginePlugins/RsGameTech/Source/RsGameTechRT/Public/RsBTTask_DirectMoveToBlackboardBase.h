#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "RsBTTask_DirectMoveToBase.h"
#include "RsBTTask_DirectMoveToBlackboardBase.generated.h"

UCLASS(Blueprintable)
class URsBTTask_DirectMoveToBlackboardBase : public URsBTTask_DirectMoveToBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector TargetBlackboardKey;
    
public:
    URsBTTask_DirectMoveToBlackboardBase();
};

