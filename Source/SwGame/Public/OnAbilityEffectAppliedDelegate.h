#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "OnAbilityEffectAppliedDelegate.generated.h"

class AActor;
class URsAbility;
class URsAbilityEffect;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnAbilityEffectApplied, TSubclassOf<URsAbility>, AbilityType, TSubclassOf<URsAbilityEffect>, EffectType, AActor*, Target);

