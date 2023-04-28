#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SwVehicleDrivingInterfaceComponentOnExitDrivingVehicleSignatureDelegate.h"
#include "SwVehicleDrivingInterfaceComponentOnStartDrivingRequestedVehicleSignatureDelegate.h"
#include "SwVehicleDrivingInterfaceComponentOnStartDrivingVehicleSignatureDelegate.h"
#include "SwVehicleDrivingInterfaceComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SWGAME_API USwVehicleDrivingInterfaceComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwVehicleDrivingInterfaceComponentOnStartDrivingVehicleSignature BlueprintOnStartDrivingVehicleEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwVehicleDrivingInterfaceComponentOnStartDrivingRequestedVehicleSignature BlueprintOnStartDrivingRequestedVehicleEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwVehicleDrivingInterfaceComponentOnExitDrivingVehicleSignature BlueprintOnExitDrivingVehicleEvent;
    
    USwVehicleDrivingInterfaceComponent();
};

