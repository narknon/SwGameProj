#pragma once
#include "CoreMinimal.h"
#include "SwVehicleDrivingInterfaceComponentOnStartDrivingRequestedVehicleSignatureDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSwVehicleDrivingInterfaceComponentOnStartDrivingRequestedVehicleSignature, AActor*, VehicleActor, AActor*, DriverActor);

