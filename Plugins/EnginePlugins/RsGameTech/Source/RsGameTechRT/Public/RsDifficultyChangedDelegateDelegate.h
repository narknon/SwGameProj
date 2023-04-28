#pragma once
#include "CoreMinimal.h"
#include "ERsDifficulty.h"
#include "RsDifficultyChangedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FRsDifficultyChangedDelegate, ERsDifficulty, PreviousDifficulty, ERsDifficulty, NewDifficulty);

