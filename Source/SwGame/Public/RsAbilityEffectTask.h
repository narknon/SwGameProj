#pragma once
#include "CoreMinimal.h"
#include "RsAbilitySystemTask.h"
#include "RsAbilityEffectTask.generated.h"

UCLASS(Abstract, Blueprintable, HideDropdown)
class SWGAME_API URsAbilityEffectTask : public URsAbilitySystemTask {
    GENERATED_BODY()
public:
    URsAbilityEffectTask();
};

