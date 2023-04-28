#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "RAPSubtitleStartedEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FRAPSubtitleStartedEvent, FGameplayTag, Speaker, FText, LineContent, int32, UID);

