#pragma once
#include "CoreMinimal.h"
#include "RsOnTakeSyncDamageDelegateDelegate.generated.h"

class AActor;
class AController;
class UDamageType;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FiveParams(FRsOnTakeSyncDamageDelegate, AActor*, DamagedActor, float, Damage, const UDamageType*, DamageType, AController*, InstigatedBy, AActor*, DamageCauser);

