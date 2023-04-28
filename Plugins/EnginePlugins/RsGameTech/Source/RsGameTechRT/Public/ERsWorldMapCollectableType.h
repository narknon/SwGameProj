#pragma once
#include "CoreMinimal.h"
#include "ERsWorldMapCollectableType.generated.h"

UENUM(BlueprintType)
enum class ERsWorldMapCollectableType : uint8 {
    DroidScan,
    ForceEcho,
    RewardChest,
    HealCanister,
    LifeEssence,
    ForceEssence,
    Workbench,
    DroidUpgrade,
    JediUpgrade,
    EpicCosmetic,
    LostTreasure,
    VoidTear,
    Seed,
    MAX,
};

