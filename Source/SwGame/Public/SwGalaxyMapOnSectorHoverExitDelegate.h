#pragma once
#include "CoreMinimal.h"
#include "SwGalaxyMapOnSectorHoverExitDelegate.generated.h"

class ARsWorldMapSectorActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSwGalaxyMapOnSectorHoverExit, ARsWorldMapSectorActor*, SectorActor);

