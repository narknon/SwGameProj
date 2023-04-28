#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "OnAbilityTriggeredDelegate.generated.h"

class AActor;
class URsAbility;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnAbilityTriggered, TSubclassOf<URsAbility>, AbilityType, AActor*, Target);

