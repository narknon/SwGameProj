#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RsProjectile.generated.h"

class USceneComponent;

UCLASS(Blueprintable)
class ARsProjectile : public AActor {
    GENERATED_BODY()
public:
    ARsProjectile();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<USceneComponent*> GetProjectileVisuals() const;
    
};

