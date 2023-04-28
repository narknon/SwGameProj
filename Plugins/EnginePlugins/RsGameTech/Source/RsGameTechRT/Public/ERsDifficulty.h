#pragma once
#include "CoreMinimal.h"
#include "ERsDifficulty.generated.h"

UENUM(BlueprintType)
enum class ERsDifficulty : uint8 {
    Difficulty_Easy,
    Difficulty_Normal,
    Difficulty_Hard,
    Difficulty_VeryEasy,
    Difficulty_Easier,
    NumDifficultyLevels,
};

