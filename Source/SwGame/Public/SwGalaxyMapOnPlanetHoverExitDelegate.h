#pragma once
#include "CoreMinimal.h"
#include "SwGalaxyMapOnPlanetHoverExitDelegate.generated.h"

class ARsWorldMapGalaxyPlanetActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSwGalaxyMapOnPlanetHoverExit, ARsWorldMapGalaxyPlanetActor*, PlanetActor);

