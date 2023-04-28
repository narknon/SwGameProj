#pragma once
#include "CoreMinimal.h"
#include "RsMapSectionTag.h"
#include "SwWorldMapOnPlayerMapSectionChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSwWorldMapOnPlayerMapSectionChanged, FRsMapSectionTag, InPrevious, FRsMapSectionTag, InNew);

