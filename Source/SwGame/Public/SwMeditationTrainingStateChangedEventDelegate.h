#pragma once
#include "CoreMinimal.h"
#include "ESwMeditationTrainingState.h"
#include "SwMeditationTrainingStateChangedEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSwMeditationTrainingStateChangedEvent, ESwMeditationTrainingState, NewState, ESwMeditationTrainingState, PreviousState);

