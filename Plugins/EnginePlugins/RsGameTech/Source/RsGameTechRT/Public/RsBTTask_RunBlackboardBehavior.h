#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_RunBehaviorDynamic.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "RsBTTask_RunBlackboardBehavior.generated.h"

UCLASS(Blueprintable)
class URsBTTask_RunBlackboardBehavior : public UBTTask_RunBehaviorDynamic {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector BehaviorAssetKey;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bClearBlackboardKeyOnInjection: 1;
    
public:
    URsBTTask_RunBlackboardBehavior();
};

