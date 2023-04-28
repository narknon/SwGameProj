#pragma once
#include "CoreMinimal.h"
#include "SwOnBarEmptiedSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSwOnBarEmptiedSignature, FName, ResponsibleForceName, float, TimeUntilForceRegen);

