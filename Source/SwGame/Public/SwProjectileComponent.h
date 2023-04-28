#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SwProjectileComponent.generated.h"

class ASwProjectile;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USwProjectileComponent : public UActorComponent {
    GENERATED_BODY()
public:
    USwProjectileComponent();
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASwProjectile* GetProjectile() const;
    
};

