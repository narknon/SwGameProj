#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "RsAbilityPriorityManager.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class URsAbilityPriorityManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* AbilityPriorityTable;
    
public:
    URsAbilityPriorityManager();
};

