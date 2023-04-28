#pragma once
#include "CoreMinimal.h"
#include "RsAIGoal_BaseAlert.h"
#include "RsAIGoal_Investigate.generated.h"

UCLASS(Blueprintable)
class URsAIGoal_Investigate : public URsAIGoal_BaseAlert {
    GENERATED_BODY()
public:
    URsAIGoal_Investigate();
};

