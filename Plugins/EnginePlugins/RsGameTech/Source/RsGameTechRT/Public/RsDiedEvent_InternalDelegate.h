#pragma once
#include "CoreMinimal.h"
#include "RsDiedEvent_InternalDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRsDiedEvent_Internal, AActor*, DeadActor);

