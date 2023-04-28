#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "RsMapStateData.h"
#include "INT_HolomapStateTransition.generated.h"

UINTERFACE(Blueprintable)
class UINT_HolomapStateTransition : public UInterface {
    GENERATED_BODY()
};

class IINT_HolomapStateTransition : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStateTransition_Blueprint(const FRsMapStateData& NewState);
    
};

