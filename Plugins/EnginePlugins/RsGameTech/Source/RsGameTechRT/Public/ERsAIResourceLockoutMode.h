#pragma once
#include "CoreMinimal.h"
#include "ERsAIResourceLockoutMode.generated.h"

UENUM(BlueprintType)
namespace ERsAIResourceLockoutMode {
    enum Type {
        LockoutOnAcquire,
        LockoutOnRelease,
    };
}

