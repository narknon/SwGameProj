#pragma once
#include "CoreMinimal.h"
#include "RsMapSectionTag.h"
#include "SwInteriorMapOnMapSectionChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FSwInteriorMapOnMapSectionChanged, FRsMapSectionTag, Previous, FName, PreviousSector, FRsMapSectionTag, New, FName, NewSector);

