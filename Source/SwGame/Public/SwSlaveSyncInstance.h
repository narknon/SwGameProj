#pragma once
#include "CoreMinimal.h"
#include "RsSlaveSyncInstance.h"
#include "SwSlaveSyncInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class SWGAME_API USwSlaveSyncInstance : public URsSlaveSyncInstance {
    GENERATED_BODY()
public:
    USwSlaveSyncInstance();
};

