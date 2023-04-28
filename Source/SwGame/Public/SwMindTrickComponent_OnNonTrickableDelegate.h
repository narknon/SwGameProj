#pragma once
#include "CoreMinimal.h"
#include "SwMindTrickComponent_OnNonTrickableDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSwMindTrickComponent_OnNonTrickable, AActor*, InActor);

