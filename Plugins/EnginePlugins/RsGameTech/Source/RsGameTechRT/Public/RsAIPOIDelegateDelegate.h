#pragma once
#include "CoreMinimal.h"
#include "RsAIPOIDelegateDelegate.generated.h"

class ARsAIPOI;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRsAIPOIDelegate, ARsAIPOI*, POI);

