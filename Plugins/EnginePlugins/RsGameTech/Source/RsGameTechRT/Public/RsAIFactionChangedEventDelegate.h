#pragma once
#include "CoreMinimal.h"
#include "RsAIFactionChangedEventDelegate.generated.h"

class URsTargetableComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRsAIFactionChangedEvent, URsTargetableComponent*, TargetableComponent);

