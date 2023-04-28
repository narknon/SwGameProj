#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Decorators/BTDecorator_BlackboardBase.h"
#include "ERsAIInvestigateMode.h"
#include "RsBTDecorator_CheckInvestigateMode.generated.h"

UCLASS(Blueprintable)
class URsBTDecorator_CheckInvestigateMode : public UBTDecorator_BlackboardBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ERsAIInvestigateMode::Type> InvestigateMode;
    
public:
    URsBTDecorator_CheckInvestigateMode();
};

