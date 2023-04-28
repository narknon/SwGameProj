#pragma once
#include "CoreMinimal.h"
#include "CameraModeCompletionDelegate2Delegate.generated.h"

class URsCameraModeDefinition;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCameraModeCompletionDelegate2, URsCameraModeDefinition*, CameraModeDefinition);

