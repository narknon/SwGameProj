#pragma once
#include "CoreMinimal.h"
#include "RsWorldStateQuery.generated.h"

class UWorldStateQueryExpression;

USTRUCT(BlueprintType)
struct RSWORLDSTATEPLUGIN_API FRsWorldStateQuery {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserDescription;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWorldStateQueryExpression* WorldStateRootExpression;
    
    FRsWorldStateQuery();
};

