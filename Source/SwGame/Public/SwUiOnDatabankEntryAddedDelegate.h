#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "SwUiOnDatabankEntryAddedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSwUiOnDatabankEntryAdded, FGameplayTag, AddedTag);

