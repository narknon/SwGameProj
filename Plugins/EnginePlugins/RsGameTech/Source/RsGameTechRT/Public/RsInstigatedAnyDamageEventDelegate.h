#pragma once
#include "CoreMinimal.h"
#include "RsDamageParams.h"
#include "RsInstigatedAnyDamageEventDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FRsInstigatedAnyDamageEvent, float, Damage, const FRsDamageParams&, DamageInfo, AActor*, DamagedActor, AActor*, DamageCauser);

