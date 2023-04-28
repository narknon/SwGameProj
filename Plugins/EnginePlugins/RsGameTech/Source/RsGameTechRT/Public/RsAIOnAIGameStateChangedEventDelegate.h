#pragma once
#include "CoreMinimal.h"
#include "ERsAIGameState.h"
#include "RsAIOnAIGameStateChangedEventDelegate.generated.h"

class URsAIGameStateManager;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FRsAIOnAIGameStateChangedEvent, URsAIGameStateManager*, GameStateManager, TEnumAsByte<ERsAIGameState::Type>, PreviousGameState, TEnumAsByte<ERsAIGameState::Type>, NewGameState);

