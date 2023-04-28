#pragma once
#include "CoreMinimal.h"
#include "OnNewFoliageInstanceBeforeDestroyingThisActorSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnNewFoliageInstanceBeforeDestroyingThisActorSignature, int32, PreviousFoliageInstanceIndex, int32, NewFoliageInstanceIndex);

