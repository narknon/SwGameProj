#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "SwBTDecorator_ActiveFightLoop.generated.h"

UCLASS(Blueprintable)
class SWGAME_API USwBTDecorator_ActiveFightLoop : public UBTDecorator {
    GENERATED_BODY()
public:
    USwBTDecorator_ActiveFightLoop();
};

