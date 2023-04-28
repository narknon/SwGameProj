#pragma once
#include "CoreMinimal.h"
#include "RsAIGoal_BaseAggro.h"
#include "RsAIGoal_FightIdle.generated.h"

UCLASS(Blueprintable)
class URsAIGoal_FightIdle : public URsAIGoal_BaseAggro {
    GENERATED_BODY()
public:
    URsAIGoal_FightIdle();
};

