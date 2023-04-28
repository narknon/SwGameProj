#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=RsMapSectionTag -FallbackName=RsMapSectionTag
#include "SwLocalMapOnMapSectionChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FSwLocalMapOnMapSectionChanged, FRsMapSectionTag, Previous, FName, PreviousSector, FRsMapSectionTag, New, FName, NewSector);

