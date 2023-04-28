#pragma once
#include "CoreMinimal.h"
#include "SwRangedOffenseBaseComponent_SpawnedProjectileDelegate.generated.h"

class ASwProjectile;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSwRangedOffenseBaseComponent_SpawnedProjectile, ASwProjectile*, SpawnedProjectile);

