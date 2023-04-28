#pragma once
#include "CoreMinimal.h"
#include "ERsAIInvestigateMode.generated.h"

UENUM(BlueprintType)
namespace ERsAIInvestigateMode {
    enum Type {
        Idle,
        Move,
        Moving,
    };
}

