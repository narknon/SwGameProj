#pragma once
#include "CoreMinimal.h"
#include "ESwMeditationTrainingHeroModifier.generated.h"

UENUM(BlueprintType)
enum class ESwMeditationTrainingHeroModifier : uint8 {
    HeroModifier_None,
    HeroModifier_InfiniteFocus,
    HeroModifier_InfiniteHealth,
    HeroModifier_InfiniteBlock,
    HeroModifier_AllHostile = 0x9,
    HeroModifier_NoFactions,
    HeroModifier_SpectatorMode,
    HeroModifier_MAX UMETA(Hidden),
};

