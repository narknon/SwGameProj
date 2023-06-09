#pragma once
#include "CoreMinimal.h"
#include "RsMapSectionTag.h"
#include "SwLocalMapOnMapSectionChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FSwLocalMapOnMapSectionChanged, FRsMapSectionTag, Previous, FName, PreviousSector, FRsMapSectionTag, New, FName, NewSector);

