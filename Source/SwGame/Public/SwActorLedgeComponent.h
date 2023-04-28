#pragma once
#include "CoreMinimal.h"
#include "RsActorLedgeComponent.h"
#include "SwActorLedgeComponent.generated.h"

class USwActorLedgeSettings;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USwActorLedgeComponent : public URsActorLedgeComponent {
    GENERATED_BODY()
public:
    USwActorLedgeComponent();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USwActorLedgeSettings* GetSwLedgeSettings() const;
    
};

