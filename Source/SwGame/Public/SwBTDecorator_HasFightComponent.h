#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "SwBTDecorator_HasFightComponent.generated.h"

UCLASS(Blueprintable)
class SWGAME_API USwBTDecorator_HasFightComponent : public UBTDecorator {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector TestActorKey;
    
public:
    USwBTDecorator_HasFightComponent();
};

