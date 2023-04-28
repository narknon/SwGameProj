#pragma once
#include "CoreMinimal.h"
#include "RsChemistryObjectHandle.h"
#include "RsOnFireExtinguishedMulticastDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRsOnFireExtinguishedMulticastDelegate, FRsChemistryObjectHandle, FlammableObject);

