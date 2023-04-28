#pragma once
#include "CoreMinimal.h"
#include "RsMapSectionTag.h"
#include "SwSectorMapOnMapSectionChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FSwSectorMapOnMapSectionChanged, FRsMapSectionTag, PreviousMapSection, FName, PreviousSector, FRsMapSectionTag, NewMapSection, FName, CurrentSector);

