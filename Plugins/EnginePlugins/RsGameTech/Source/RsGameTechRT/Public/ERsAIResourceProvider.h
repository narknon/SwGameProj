#pragma once
#include "CoreMinimal.h"
#include "ERsAIResourceProvider.generated.h"

UENUM(BlueprintType)
namespace ERsAIResourceProvider {
    enum Type {
        AttackTarget,
        BlackboardKey,
        Global,
    };
}

