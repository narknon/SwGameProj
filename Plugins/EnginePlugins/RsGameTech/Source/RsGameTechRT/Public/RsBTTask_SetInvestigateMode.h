#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "ERsAIInvestigateMode.h"
#include "RsBTTask_SetInvestigateMode.generated.h"

UCLASS(Blueprintable)
class URsBTTask_SetInvestigateMode : public UBTTaskNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector InvestigateModeKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ERsAIInvestigateMode::Type> InvestigateMode;
    
public:
    URsBTTask_SetInvestigateMode();
};

