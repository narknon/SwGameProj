#pragma once
#include "CoreMinimal.h"
#include "SwGalaxyMapOnPlanetHoverEnterDelegate.generated.h"

class ARsWorldMapGalaxyPlanetActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSwGalaxyMapOnPlanetHoverEnter, ARsWorldMapGalaxyPlanetActor*, PlanetActor);

