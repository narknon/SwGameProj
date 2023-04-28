#pragma once
#include "CoreMinimal.h"
#include "RsOnEncounterGroupEventDelegate.generated.h"

class ARsAIEncounterGroup;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRsOnEncounterGroupEvent, ARsAIEncounterGroup*, EncounterGroup);

