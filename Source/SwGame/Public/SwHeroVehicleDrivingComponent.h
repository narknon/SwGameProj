#pragma once
#include "CoreMinimal.h"
#include "ERsNavState.h"
#include "RsCharacterNavigationComponent.h"
#include "ESwVehicleState.h"
#include "SwHeroVehicleDrivingComponentOnSyncEndSignatureDelegate.h"
#include "SwHeroVehicleDrivingComponentOnSyncStartSignatureDelegate.h"
#include "SwHeroVehicleDrivingComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USwHeroVehicleDrivingComponent : public URsCharacterNavigationComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaximumDistanceToEnterVehicle;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwHeroVehicleDrivingComponentOnSyncStartSignature BlueprintOnSyncStartEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwHeroVehicleDrivingComponentOnSyncEndSignature BlueprintOnSyncEndEvent;
    
    USwHeroVehicleDrivingComponent();
    UFUNCTION(BlueprintCallable)
    void ShootLaserButtonReleased();
    
    UFUNCTION(BlueprintCallable)
    void ShootLaserButtonPushed();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnNavStateExited(ERsNavState NewState, ERsNavState PrevState);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESwVehicleState GetCurrentState() const;
    
    UFUNCTION(BlueprintCallable)
    void ExitVehicleButtonReleased();
    
    UFUNCTION(BlueprintCallable)
    void ExitVehicleButtonPushed();
    
    UFUNCTION(BlueprintCallable)
    void EnterVehicleButtonReleased();
    
    UFUNCTION(BlueprintCallable)
    void EnterVehicleButtonPushed();
    
    UFUNCTION(BlueprintCallable)
    void DrivingThrottleButtonReleased();
    
    UFUNCTION(BlueprintCallable)
    void DrivingThrottleButtonPushed();
    
    UFUNCTION(BlueprintCallable)
    void DrivingSpeedBoostButtonReleased();
    
    UFUNCTION(BlueprintCallable)
    void DrivingSpeedBoostButtonPushed();
    
    UFUNCTION(BlueprintCallable)
    void DrivingSlowDownButtonReleased();
    
    UFUNCTION(BlueprintCallable)
    void DrivingSlowDownButtonPushed();
    
    UFUNCTION(BlueprintCallable)
    void DrivingBrakeButtonReleased();
    
    UFUNCTION(BlueprintCallable)
    void DrivingBrakeButtonPushed();
    
    UFUNCTION(BlueprintCallable)
    bool CanPerformEnterVehicleAction(FName ActionName) const;
    
};

