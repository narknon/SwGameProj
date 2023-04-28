#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "SwBTDecorator_ShouldAlignToInnerFightSector.generated.h"

UCLASS(Blueprintable)
class SWGAME_API USwBTDecorator_ShouldAlignToInnerFightSector : public UBTDecorator {
    GENERATED_BODY()
public:
    USwBTDecorator_ShouldAlignToInnerFightSector();
};

