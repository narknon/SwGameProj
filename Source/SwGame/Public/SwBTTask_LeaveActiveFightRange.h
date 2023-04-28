#pragma once
#include "CoreMinimal.h"
#include "RsBTTask_DirectMoveToBase.h"
#include "SwBTTask_LeaveActiveFightRange.generated.h"

UCLASS(Blueprintable)
class SWGAME_API USwBTTask_LeaveActiveFightRange : public URsBTTask_DirectMoveToBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FallbackTimer;
    
public:
    USwBTTask_LeaveActiveFightRange();
};

