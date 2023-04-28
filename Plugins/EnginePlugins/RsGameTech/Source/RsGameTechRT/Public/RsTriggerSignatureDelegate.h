#pragma once
#include "CoreMinimal.h"
#include "RsTriggerSignatureDelegate.generated.h"

class AActor;
class URsBaseTriggerComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FRsTriggerSignature, URsBaseTriggerComponent*, TriggerComponent, AActor*, Actor);

