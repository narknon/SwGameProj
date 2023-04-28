#pragma once
#include "CoreMinimal.h"
#include "ERsAIPOIOverrideAttackTargetMode.generated.h"

UENUM(BlueprintType)
enum class ERsAIPOIOverrideAttackTargetMode : uint8 {
    None,
    AttackPlayer,
    AttackActorInLevel,
};

