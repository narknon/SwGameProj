#pragma once
#include "CoreMinimal.h"
#include "SwMindTrickComponent_OnTrickAttemptFailDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSwMindTrickComponent_OnTrickAttemptFail, AActor*, InActor);

