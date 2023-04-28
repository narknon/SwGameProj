#pragma once
#include "CoreMinimal.h"
#include "AudioDebrisOutputData.h"
#include "OnAbilityDebrisTriggeredDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnAbilityDebrisTriggered, TArray<FAudioDebrisOutputData>, DataMap, FName, SwitchName);

