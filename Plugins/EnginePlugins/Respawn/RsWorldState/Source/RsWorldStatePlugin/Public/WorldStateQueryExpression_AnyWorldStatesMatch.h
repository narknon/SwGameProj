#pragma once
#include "CoreMinimal.h"
#include "RsWorldStatesContainer.h"
#include "WorldStateQueryExpression.h"
#include "WorldStateQueryExpression_AnyWorldStatesMatch.generated.h"

UCLASS(Blueprintable)
class UWorldStateQueryExpression_AnyWorldStatesMatch : public UWorldStateQueryExpression {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsWorldStatesContainer WorldStateContainer;
    
    UWorldStateQueryExpression_AnyWorldStatesMatch();
};

