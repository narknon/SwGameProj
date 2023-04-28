#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "ERsAIBTComparisionOperation.h"
#include "RsBTDecorator_CheckNumberOfTeammates.generated.h"

UCLASS(Blueprintable)
class URsBTDecorator_CheckNumberOfTeammates : public UBTDecorator {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumberOfTeammates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ERsAIBTComparisionOperation::Type> Comparison;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUseInequalityComparison: 1;
    
public:
    URsBTDecorator_CheckNumberOfTeammates();
};

