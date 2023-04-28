#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=RsMapSectionTag -FallbackName=RsMapSectionTag
#include "SwWorldMapOnPlayerMapSectionChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSwWorldMapOnPlayerMapSectionChanged, FRsMapSectionTag, InPrevious, FRsMapSectionTag, InNew);

