#pragma once
#include "CoreMinimal.h"
#include "SwWorldMapOnPropertyInspectorTargetChangedDelegate.generated.h"

class ARsWorldMapActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FSwWorldMapOnPropertyInspectorTargetChanged, ARsWorldMapActor*, PreviousTarget, FName, PreviousDescriptionRow, ARsWorldMapActor*, NewTarget, FName, NewDescriptionRow);

