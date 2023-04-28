#pragma once
#include "CoreMinimal.h"
#include "ProjectileReflectedSignatureDelegate.generated.h"

class AActor;
class ARsCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FProjectileReflectedSignature, ARsCharacter*, ReflectionInstigator, AActor*, OverrideShootTarget, float, OverrideSpeed);

