#pragma once
#include "CoreMinimal.h"
#include "CameraModeUpdateDelegate2Delegate.generated.h"

class URsCameraModeDefinition;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FCameraModeUpdateDelegate2, URsCameraModeDefinition*, CameraModeDefinition, float, TimeRemaining);

