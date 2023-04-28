#pragma once
#include "CoreMinimal.h"
#include "SwOnStaminaBarEmptiedSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSwOnStaminaBarEmptiedSignature, FName, ResponsibleStaminaName, float, TimeUntilStaminaRegen);

