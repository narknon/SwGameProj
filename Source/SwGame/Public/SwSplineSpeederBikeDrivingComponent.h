#pragma once
#include "CoreMinimal.h"
#include "SwSpeederBikeDrivingInterfaceComponent.h"
#include "SwSpeederBikeSyncHeroAutopilotParameters.h"
#include "SwSpeederBikeWallCollisionInfo.h"
#include "SwSplineSpeederBikeDrivingComponentOnBoostEndSignatureDelegate.h"
#include "SwSplineSpeederBikeDrivingComponentOnBoostStartSignatureDelegate.h"
#include "SwSplineSpeederBikeDrivingComponentOnVehicleFacingBackwardsDelegate.h"
#include "SwSplineSpeederBikeDrivingComponentOnWallCollisionDelegate.h"
#include "SwSplineSpeederBikeDrivingComponentPostNativeSplineSpeederBikeTickDelegate.h"
#include "SwSplineSpeederBikeDrivingComponent.generated.h"

class AActor;
class UPrimitiveComponent;
class USplineComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SWGAME_API USwSplineSpeederBikeDrivingComponent : public USwSpeederBikeDrivingInterfaceComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* SplinePathActor;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwSplineSpeederBikeDrivingComponentOnBoostStartSignature BlueprintOnBoostStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwSplineSpeederBikeDrivingComponentOnBoostEndSignature BlueprintOnBoostEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwSplineSpeederBikeDrivingComponentPostNativeSplineSpeederBikeTick BlueprintSplineSpeederBikePostNativeTick;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwSplineSpeederBikeDrivingComponentOnWallCollision BlueprintOnWallCollisionEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwSplineSpeederBikeDrivingComponentOnVehicleFacingBackwards BlueprintOnVehicleFacingBackwards;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USplineComponent* m_SplineComponent;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<TWeakObjectPtr<UPrimitiveComponent>, FSwSpeederBikeWallCollisionInfo> WallCollisions;
    
public:
    USwSplineSpeederBikeDrivingComponent();
    UFUNCTION(BlueprintCallable)
    void StopAutopilot();
    
    UFUNCTION(BlueprintCallable)
    void StartAutopilot(const FSwSpeederBikeSyncHeroAutopilotParameters& autopilotParams);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxValueOfBoostMeter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentValueOfBoostMeter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAnimStateSmoothedSteeringValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetAnimStateIsSpeedBoostActive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAnimStateInputBasedSteeringValue() const;
    
};

