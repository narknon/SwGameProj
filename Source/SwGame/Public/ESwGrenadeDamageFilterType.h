#pragma once
#include "CoreMinimal.h"
#include "ESwGrenadeDamageFilterType.generated.h"

UENUM(BlueprintType)
enum class ESwGrenadeDamageFilterType : uint8 {
    DamageAll,
    NoDamageToShooter,
    NoDamageToFriendlies,
};

