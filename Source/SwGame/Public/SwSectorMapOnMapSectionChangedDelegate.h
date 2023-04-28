#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=RsMapSectionTag -FallbackName=RsMapSectionTag
#include "SwSectorMapOnMapSectionChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FSwSectorMapOnMapSectionChanged, FRsMapSectionTag, PreviousMapSection, FName, PreviousSector, FRsMapSectionTag, NewMapSection, FName, CurrentSector);

