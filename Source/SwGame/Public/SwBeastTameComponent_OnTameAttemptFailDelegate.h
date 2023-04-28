#pragma once
#include "CoreMinimal.h"
#include "SwBeastTameComponent_OnTameAttemptFailDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSwBeastTameComponent_OnTameAttemptFail, AActor*, InActor);

