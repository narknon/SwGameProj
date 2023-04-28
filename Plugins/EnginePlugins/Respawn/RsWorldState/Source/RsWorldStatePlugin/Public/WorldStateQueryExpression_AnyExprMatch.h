#pragma once
#include "CoreMinimal.h"
#include "WorldStateQueryExpression.h"
#include "WorldStateQueryExpression_AnyExprMatch.generated.h"

UCLASS(Blueprintable)
class UWorldStateQueryExpression_AnyExprMatch : public UWorldStateQueryExpression {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UWorldStateQueryExpression*> Expressions;
    
    UWorldStateQueryExpression_AnyExprMatch();
};

