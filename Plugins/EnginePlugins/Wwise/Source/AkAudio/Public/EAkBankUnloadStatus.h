#pragma once
#include "CoreMinimal.h"
#include "EAkBankUnloadStatus.generated.h"

UENUM(BlueprintType)
enum class EAkBankUnloadStatus : uint8 {
    NotStarted,
    InProgress,
    Complete,
};

