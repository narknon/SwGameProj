#pragma once
#include "CoreMinimal.h"
#include "RsChemistryObjectHandle.h"
#include "RsOnFireExtinguishedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FRsOnFireExtinguishedDelegate, FRsChemistryObjectHandle, FlammableObject);

