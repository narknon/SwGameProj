#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "INT_RsAudioPortalDoor.generated.h"

class AAkAcousticPortal;

UINTERFACE(Blueprintable)
class UINT_RsAudioPortalDoor : public UInterface {
    GENERATED_BODY()
};

class IINT_RsAudioPortalDoor : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SnapPortalToDoor(AAkAcousticPortal* InPortal);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetDoorPortal(AAkAcousticPortal* InPortal);
    
};

