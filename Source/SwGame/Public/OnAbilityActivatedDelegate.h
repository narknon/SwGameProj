#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "OnAbilityActivatedDelegate.generated.h"

class AActor;
class URsAbility;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnAbilityActivated, TSubclassOf<URsAbility>, AbilityType, AActor*, Target, bool, bHasSucceeded);

