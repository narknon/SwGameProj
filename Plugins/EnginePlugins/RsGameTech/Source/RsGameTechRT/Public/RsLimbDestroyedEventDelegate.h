#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "RsLimbDestroyedEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRsLimbDestroyedEvent, FGameplayTag, LimbTag);

