#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "AkManagedVolume.generated.h"

UCLASS(Blueprintable)
class AAkManagedVolume : public AVolume {
    GENERATED_BODY()
public:
    AAkManagedVolume();
};

