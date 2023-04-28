#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "SwBTTask_UnsheatheWeapon.generated.h"

UCLASS(Blueprintable)
class SWGAME_API USwBTTask_UnsheatheWeapon : public UBTTaskNode {
    GENERATED_BODY()
public:
    USwBTTask_UnsheatheWeapon();
};

