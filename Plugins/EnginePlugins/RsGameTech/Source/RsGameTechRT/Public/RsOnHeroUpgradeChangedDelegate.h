#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "RsOnHeroUpgradeChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FRsOnHeroUpgradeChanged, FGameplayTagContainer, OldTags, FGameplayTagContainer, NewTags);

