#pragma once
#include "CoreMinimal.h"
#include "RsOnInputActionSetChangedDelegate.generated.h"

class URsInputActionSetDefinition;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FRsOnInputActionSetChanged, URsInputActionSetDefinition*, OldActionSet, URsInputActionSetDefinition*, NewActionSet);

