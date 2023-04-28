#pragma once
#include "CoreMinimal.h"
#include "RsRequestApplyCustomEncounterSpawningLogicForLevelEventDelegate.generated.h"

class ULevel;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRsRequestApplyCustomEncounterSpawningLogicForLevelEvent, ULevel*, Level);

