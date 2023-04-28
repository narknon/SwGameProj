#pragma once
#include "CoreMinimal.h"
#include "RsAbilitySystemTask.h"
#include "RsAbilityTask.generated.h"

UCLASS(Abstract, Blueprintable, HideDropdown)
class SWGAME_API URsAbilityTask : public URsAbilitySystemTask {
    GENERATED_BODY()
public:
    URsAbilityTask();
};

