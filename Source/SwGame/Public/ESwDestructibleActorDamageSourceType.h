#pragma once
#include "CoreMinimal.h"
#include "ESwDestructibleActorDamageSourceType.generated.h"

UENUM(BlueprintType)
enum class ESwDestructibleActorDamageSourceType : uint8 {
    None,
    Default,
    ForcePush,
    ForcePull,
    OverlapCharacter,
    FullyDestroyPhase,
    FullyDestroyDestructibleActor,
};

