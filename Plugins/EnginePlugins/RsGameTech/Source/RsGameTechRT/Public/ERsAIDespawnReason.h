#pragma once
#include "CoreMinimal.h"
#include "ERsAIDespawnReason.generated.h"

UENUM(BlueprintType)
namespace ERsAIDespawnReason {
    enum Type {
        Died,
        Destroyed,
        SpanwerDestroyed,
    };
}

