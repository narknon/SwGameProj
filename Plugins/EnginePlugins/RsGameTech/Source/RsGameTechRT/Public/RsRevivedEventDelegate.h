#pragma once
#include "CoreMinimal.h"
#include "RsRevivedEventDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRsRevivedEvent, AActor*, RevivedActor);

