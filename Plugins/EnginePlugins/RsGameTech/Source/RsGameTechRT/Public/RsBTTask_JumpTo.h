#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "ERsTopologyMode.h"
#include "RsAIBlendspaceAnimDescriptor.h"
#include "RsBTTask_JumpTo.generated.h"

UCLASS(Blueprintable)
class URsBTTask_JumpTo : public UBTTaskNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector TargetLocationKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsAIBlendspaceAnimDescriptor JumpAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsAIBlendspaceAnimDescriptor LandAnimation;
    
public:
    URsBTTask_JumpTo();
private:
    UFUNCTION(BlueprintCallable)
    void OnTopologyChanged(ERsTopologyMode previousMode, ERsTopologyMode newMode, float Proximity);
    
};

