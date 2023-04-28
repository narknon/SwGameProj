#pragma once
#include "CoreMinimal.h"
#include "RsMapSectionTag.h"
#include "SwGalaxyMapOnMapSectionChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSwGalaxyMapOnMapSectionChanged, FRsMapSectionTag, Previous, FRsMapSectionTag, New);

