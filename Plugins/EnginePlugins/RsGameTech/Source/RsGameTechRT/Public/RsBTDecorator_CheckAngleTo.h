#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "ERsAIBTComparisionOperation.h"
#include "ERsAICharacterAxis.h"
#include "RsBTDecorator_RelativeToLocationBase.h"
#include "RsBTDecorator_CheckAngleTo.generated.h"

UCLASS(Blueprintable)
class URsBTDecorator_CheckAngleTo : public URsBTDecorator_RelativeToLocationBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ERsAICharacterAxis::Type> Axis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ERsAIBTComparisionOperation::Type> Comparison;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Angle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUseCustomAxis: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector CustomAxisEndLocationKey;
    
public:
    URsBTDecorator_CheckAngleTo();
};

