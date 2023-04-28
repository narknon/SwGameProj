#pragma once
#include "CoreMinimal.h"
#include "ERsCameraConditionalExpressionBooleanOperator.h"
#include "RsCameraConditional.h"
#include "RsCameraConditionalExpression.generated.h"

UCLASS(Blueprintable)
class URsCameraConditionalExpression : public URsCameraConditional {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URsCameraConditional* A;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERsCameraConditionalExpressionBooleanOperator Operator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URsCameraConditional* B;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowEarlyOut;
    
public:
    URsCameraConditionalExpression();
};

