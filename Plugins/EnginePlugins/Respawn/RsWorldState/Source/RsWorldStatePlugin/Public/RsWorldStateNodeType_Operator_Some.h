#pragma once
#include "CoreMinimal.h"
#include "RsWorldStateNodeType_Operator.h"
#include "RsWorldStateNodeType_Operator_Some.generated.h"

UCLASS(Blueprintable)
class URsWorldStateNodeType_Operator_Some : public URsWorldStateNodeType_Operator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumberOfPrevNodesRequired;
    
    URsWorldStateNodeType_Operator_Some();
};

