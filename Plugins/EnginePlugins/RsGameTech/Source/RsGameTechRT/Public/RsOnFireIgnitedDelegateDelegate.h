#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RsChemistryObjectHandle.h"
#include "RsOnFireIgnitedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FRsOnFireIgnitedDelegate, FRsChemistryObjectHandle, FlammableObject, FVector, IgnitionPoint);

