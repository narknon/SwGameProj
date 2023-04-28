#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "SwPoisonFogBeam.h"
#include "SwPoisonFogOrb.h"
#include "SwPoisonFogEffectDataInterface.generated.h"

UINTERFACE(Blueprintable)
class USwPoisonFogEffectDataInterface : public UInterface {
    GENERATED_BODY()
};

class ISwPoisonFogEffectDataInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateEffectData(TArray<FSwPoisonFogOrb>& Orbs, TArray<FSwPoisonFogBeam>& Beams);
    
};

