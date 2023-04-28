#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "ERsAIPatrolPathUsage.h"
#include "RsBTDecorator_CheckScriptedPatrolUsage.generated.h"

UCLASS(Blueprintable)
class URsBTDecorator_CheckScriptedPatrolUsage : public UBTDecorator {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ERsAIPatrolPathUsage::Type> PatrolPathUsage;
    
public:
    URsBTDecorator_CheckScriptedPatrolUsage();
};

