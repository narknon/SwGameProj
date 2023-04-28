#pragma once
#include "CoreMinimal.h"
#include "SwVehicleDrivingInterfaceComponentOnStartDrivingVehicleSignatureDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSwVehicleDrivingInterfaceComponentOnStartDrivingVehicleSignature, AActor*, VehicleActor, AActor*, DriverActor);

