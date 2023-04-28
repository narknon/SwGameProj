#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ESwProjectileReflectionResult.h"
#include "SwProjectileReflectionInterface.generated.h"

class ASwProjectile;

UINTERFACE(Blueprintable)
class USwProjectileReflectionInterface : public UInterface {
    GENERATED_BODY()
};

class ISwProjectileReflectionInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ShouldDisableProjectileReflection();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnReflectedProjectile(ASwProjectile* IncomingProjectile);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDeflectedProjectile(ASwProjectile* IncomingProjectile);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    ESwProjectileReflectionResult HandleProjectileReflection(ASwProjectile* IncomingProjectile);
    
};

