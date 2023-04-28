#pragma once
#include "CoreMinimal.h"
#include "SwBendingMetalDoorOnFullyOpenedSignatureDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSwBendingMetalDoorOnFullyOpenedSignature, AActor*, SwBendingMetalDoorActor);

