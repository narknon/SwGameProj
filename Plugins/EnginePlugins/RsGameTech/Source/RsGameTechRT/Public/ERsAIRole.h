#pragma once
#include "CoreMinimal.h"
#include "ERsAIRole.generated.h"

UENUM(BlueprintType)
namespace ERsAIRole {
    enum Type {
        Default,
        Ambusher,
        AmbusherWithHearing,
        Guard,
    };
}

