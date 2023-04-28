#pragma once
#include "CoreMinimal.h"
#include "ESwMeditationTrainingState.generated.h"

UENUM(BlueprintType)
enum class ESwMeditationTrainingState : uint8 {
    Mode_BattleSelect,
    Mode_Options_Arena,
    Mode_Options_Modifiers,
    Mode_PlacingSpawners,
    Mode_Combat,
    Mode_PostCombat,
    Mode_MAX UMETA(Hidden),
};

