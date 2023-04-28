#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "ERsAIBTComparisionOperation.h"
#include "ERsAIMultiplicandSource.h"
#include "RsBTDecorator_RelativeToLocationBase.h"
#include "RsBTDecorator_IsMultipleAwayFrom.generated.h"

UCLASS(Blueprintable)
class URsBTDecorator_IsMultipleAwayFrom : public URsBTDecorator_RelativeToLocationBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ERsAIBTComparisionOperation::Type> Comparison;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ERsAIMultiplicandSource::Type> MultiplicandSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Multiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector MultiplicandKey;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCheckDistanceIn2D: 1;
    
public:
    URsBTDecorator_IsMultipleAwayFrom();
};

