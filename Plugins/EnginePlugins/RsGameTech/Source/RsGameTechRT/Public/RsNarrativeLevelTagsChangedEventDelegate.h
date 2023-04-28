#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "RsNarrativeLevelTagsChangedEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FRsNarrativeLevelTagsChangedEvent, FGameplayTagContainer, RecentSetTags, FGameplayTagContainer, RecentUnsetTags);

