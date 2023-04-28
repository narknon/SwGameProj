#pragma once
#include "CoreMinimal.h"
#include "RsMapSectionTag.h"
#include "SwWorldMapHologramHoverOverExploredMapSectionsDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSwWorldMapHologramHoverOverExploredMapSectionsDelegate, const TArray<FRsMapSectionTag>&, HoveredMapSections);

