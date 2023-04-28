#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "Templates/SubclassOf.h"
#include "SwBTDecorator_CanRunActiveFightBehavior.generated.h"

class URsAIResource;

UCLASS(Blueprintable)
class SWGAME_API USwBTDecorator_CanRunActiveFightBehavior : public UBTDecorator {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<URsAIResource> ResourceClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinCancelDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxCancelDelay;
    
public:
    USwBTDecorator_CanRunActiveFightBehavior();
};

