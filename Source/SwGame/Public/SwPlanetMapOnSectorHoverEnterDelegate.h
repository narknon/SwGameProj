#pragma once
#include "CoreMinimal.h"
#include "SwPlanetMapOnSectorHoverEnterDelegate.generated.h"

class ARsWorldMapSectorActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSwPlanetMapOnSectorHoverEnter, ARsWorldMapSectorActor*, SectorActor);

