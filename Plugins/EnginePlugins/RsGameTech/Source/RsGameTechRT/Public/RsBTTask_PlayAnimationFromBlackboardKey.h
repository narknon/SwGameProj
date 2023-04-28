#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "RsBTTask_PlayAnimationBase.h"
#include "RsBTTask_PlayAnimationFromBlackboardKey.generated.h"

UCLASS(Blueprintable)
class URsBTTask_PlayAnimationFromBlackboardKey : public URsBTTask_PlayAnimationBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector AnimDataKey;
    
public:
    URsBTTask_PlayAnimationFromBlackboardKey();
};

