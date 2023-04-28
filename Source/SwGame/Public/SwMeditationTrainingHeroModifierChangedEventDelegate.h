#pragma once
#include "CoreMinimal.h"
#include "ESwMeditationTrainingHeroModifier.h"
#include "SwMeditationTrainingHeroModifierChangedEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FSwMeditationTrainingHeroModifierChangedEvent, ESwMeditationTrainingHeroModifier, ModifierType, int32, NewSetting, int32, MaxSetting);

