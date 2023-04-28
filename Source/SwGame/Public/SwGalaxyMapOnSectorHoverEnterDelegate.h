#pragma once
#include "CoreMinimal.h"
#include "SwGalaxyMapOnSectorHoverEnterDelegate.generated.h"

class ARsWorldMapSectorActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSwGalaxyMapOnSectorHoverEnter, ARsWorldMapSectorActor*, SectorActor);

