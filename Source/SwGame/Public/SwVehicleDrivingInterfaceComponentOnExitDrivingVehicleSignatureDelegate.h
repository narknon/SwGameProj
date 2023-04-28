#pragma once
#include "CoreMinimal.h"
#include "SwVehicleDrivingInterfaceComponentOnExitDrivingVehicleSignatureDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSwVehicleDrivingInterfaceComponentOnExitDrivingVehicleSignature, AActor*, VehicleActor, AActor*, DriverActor);

