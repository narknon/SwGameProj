#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "INT_Quicksand.generated.h"

class ASwQuicksandActor;

UINTERFACE(Blueprintable)
class SWGAME_API UINT_Quicksand : public UInterface {
    GENERATED_BODY()
};

class SWGAME_API IINT_Quicksand : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStopBeingAffectedByQuicksand(ASwQuicksandActor* QuicksandActor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStartBeingAffectedByQuicksand(ASwQuicksandActor* QuicksandActor);
    
};

