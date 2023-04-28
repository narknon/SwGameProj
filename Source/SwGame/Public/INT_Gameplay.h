#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "INT_Gameplay.generated.h"

UINTERFACE(Blueprintable)
class UINT_Gameplay : public UInterface {
    GENERATED_BODY()
};

class IINT_Gameplay : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCollisionWithBumper();
    
};

