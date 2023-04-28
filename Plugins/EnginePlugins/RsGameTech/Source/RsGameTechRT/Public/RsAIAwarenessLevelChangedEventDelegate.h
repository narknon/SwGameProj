#pragma once
#include "CoreMinimal.h"
#include "ERsAIAwarenessLevel.h"
#include "RsAIAwarenessLevelChangedEventDelegate.generated.h"

class AActor;
class ARsAIController;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FRsAIAwarenessLevelChangedEvent, ARsAIController*, AIController, AActor*, Actor, TEnumAsByte<ERsAIAwarenessLevel::Type>, PreviousAwarenessLevel, TEnumAsByte<ERsAIAwarenessLevel::Type>, NewAwarenessLevel);

