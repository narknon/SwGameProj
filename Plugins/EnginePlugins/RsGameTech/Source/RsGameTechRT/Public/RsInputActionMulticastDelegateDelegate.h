#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineBaseTypes.h"
#include "RsInputActionMulticastDelegateDelegate.generated.h"

class UObject;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FRsInputActionMulticastDelegate, FName, ActionName, TEnumAsByte<EInputEvent>, EventType, UObject*, Handler);

