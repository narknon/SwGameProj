#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RsChemistryObjectHandle.h"
#include "RsOnFireIgnitedMulticastDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FRsOnFireIgnitedMulticastDelegate, FRsChemistryObjectHandle, FlammableObject, FVector, IgnitionPoint);

