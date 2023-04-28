#pragma once
#include "CoreMinimal.h"
#include "RsSyncManager.h"
#include "SwSyncManager.generated.h"

UCLASS(Blueprintable, NonTransient)
class SWGAME_API USwSyncManager : public URsSyncManager {
    GENERATED_BODY()
public:
    USwSyncManager();
};

