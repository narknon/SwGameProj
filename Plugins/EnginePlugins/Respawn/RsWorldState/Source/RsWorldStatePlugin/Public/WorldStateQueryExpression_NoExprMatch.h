#pragma once
#include "CoreMinimal.h"
#include "WorldStateQueryExpression.h"
#include "WorldStateQueryExpression_NoExprMatch.generated.h"

UCLASS(Blueprintable)
class UWorldStateQueryExpression_NoExprMatch : public UWorldStateQueryExpression {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UWorldStateQueryExpression*> Expressions;
    
    UWorldStateQueryExpression_NoExprMatch();
};

