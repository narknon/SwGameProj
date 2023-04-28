#pragma once
#include "CoreMinimal.h"
#include "ProjectileDeflectedSignatureDelegate.generated.h"

class ARsCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FProjectileDeflectedSignature, ARsCharacter*, DeflectionInstigator, float, OverrideSpeed);

