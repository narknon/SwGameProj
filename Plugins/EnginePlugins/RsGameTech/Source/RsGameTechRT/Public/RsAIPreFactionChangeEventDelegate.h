#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "RsAIPreFactionChangeEventDelegate.generated.h"

class URsTargetableComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FRsAIPreFactionChangeEvent, URsTargetableComponent*, TargetableComponent, FGameplayTag, PreviousFactionTag, FGameplayTag, NewFactionTag);

