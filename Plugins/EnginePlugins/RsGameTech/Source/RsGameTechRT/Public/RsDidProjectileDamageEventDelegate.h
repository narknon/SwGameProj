#pragma once
#include "CoreMinimal.h"
#include "RsDidProjectileDamageEventDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRsDidProjectileDamageEvent, const AActor*, Projectile);

