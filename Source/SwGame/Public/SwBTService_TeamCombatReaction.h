#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "Templates/SubclassOf.h"
#include "SwBTService_TeamCombatReaction.generated.h"

class URsAIResource;

UCLASS(Blueprintable)
class USwBTService_TeamCombatReaction : public UBTService {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<URsAIResource> ResourceClass;
    
public:
    USwBTService_TeamCombatReaction();
};

