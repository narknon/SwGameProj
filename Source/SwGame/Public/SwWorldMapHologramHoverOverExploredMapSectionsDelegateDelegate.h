#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=RsMapSectionTag -FallbackName=RsMapSectionTag
#include "SwWorldMapHologramHoverOverExploredMapSectionsDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSwWorldMapHologramHoverOverExploredMapSectionsDelegate, const TArray<FRsMapSectionTag>&, HoveredMapSections);

