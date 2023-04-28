#pragma once
#include "CoreMinimal.h"
#include "SwPlanetMapOnSectorHoverExitDelegate.generated.h"

class ARsWorldMapSectorActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSwPlanetMapOnSectorHoverExit, ARsWorldMapSectorActor*, SectorActor);

