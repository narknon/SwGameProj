#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "RsTakeAnyLimbDamageEventDelegate.generated.h"

class AActor;
class AController;
class UDamageType;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_SixParams(FRsTakeAnyLimbDamageEvent, AActor*, DamagedActor, FGameplayTag, LimbTag, float, Damage, const UDamageType*, DamageType, AController*, InstigatedBy, AActor*, DamageCauser);

