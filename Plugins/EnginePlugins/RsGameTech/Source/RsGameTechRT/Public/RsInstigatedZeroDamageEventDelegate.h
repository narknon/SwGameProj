#pragma once
#include "CoreMinimal.h"
#include "RsDamageParams.h"
#include "RsInstigatedZeroDamageEventDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FRsInstigatedZeroDamageEvent, const FRsDamageParams&, DamageInfo, AActor*, OtherActor, AActor*, WouldBeDamageCauser);

