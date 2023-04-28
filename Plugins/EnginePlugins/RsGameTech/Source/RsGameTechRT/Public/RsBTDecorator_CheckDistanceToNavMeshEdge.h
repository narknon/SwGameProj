#pragma once
#include "CoreMinimal.h"
#include "ERsAIBTComparisionOperation.h"
#include "RsBTDecorator_RelativeToLocationBase.h"
#include "RsBTDecorator_CheckDistanceToNavMeshEdge.generated.h"

UCLASS(Blueprintable)
class URsBTDecorator_CheckDistanceToNavMeshEdge : public URsBTDecorator_RelativeToLocationBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseBooleanCompare;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ERsAIBTComparisionOperation::Type> Comparison;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Distance;
    
public:
    URsBTDecorator_CheckDistanceToNavMeshEdge();
};

