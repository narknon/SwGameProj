#pragma once
#include "CoreMinimal.h"
#include "ERsTopologyMode.h"
#include "RsEventDynamicDelegateTopologyChangeDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_ThreeParams(FRsEventDynamicDelegateTopologyChange, ERsTopologyMode, previousMode, ERsTopologyMode, newMode, float, Proximity);

