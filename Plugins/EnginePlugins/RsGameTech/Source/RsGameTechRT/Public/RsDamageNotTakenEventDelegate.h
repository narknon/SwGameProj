#pragma once
#include "CoreMinimal.h"
#include "RsDamageNotTakenEventDelegate.generated.h"

class AActor;
class AController;
class UDamageType;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FiveParams(FRsDamageNotTakenEvent, AActor*, DamagedActor, float, Damage, const UDamageType*, DamageType, AController*, InstigatedBy, AActor*, DamageCauser);

