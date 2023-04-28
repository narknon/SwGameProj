#pragma once
#include "CoreMinimal.h"
#include "RsMasterSyncInstance.h"
#include "SwMasterSyncInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class SWGAME_API USwMasterSyncInstance : public URsMasterSyncInstance {
    GENERATED_BODY()
public:
    USwMasterSyncInstance();
};

