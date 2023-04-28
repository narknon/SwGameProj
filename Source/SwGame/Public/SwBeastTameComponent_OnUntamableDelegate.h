#pragma once
#include "CoreMinimal.h"
#include "SwBeastTameComponent_OnUntamableDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSwBeastTameComponent_OnUntamable, AActor*, InActor);

