#pragma once
#include "CoreMinimal.h"
#include "ERsAIAwarenessState.h"
#include "RsAIAwarenessStateChangedEventDelegate.generated.h"

class ARsAIController;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FRsAIAwarenessStateChangedEvent, ARsAIController*, AIController, TEnumAsByte<ERsAIAwarenessState::Type>, PreviousAwarenessState, TEnumAsByte<ERsAIAwarenessState::Type>, NewAwarenessState);

