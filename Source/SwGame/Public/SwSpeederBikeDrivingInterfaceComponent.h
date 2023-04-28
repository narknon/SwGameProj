#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "SwSpeederBikeAutopilotData.h"
#include "SwSpeederBikeDrivingComponentOnLandingSignatureDelegate.h"
#include "SwSpeederBikeDrivingComponentOnTakeOffSignatureDelegate.h"
#include "SwSpeederBikeGroundSampleInfoForBlueprint.h"
#include "SwVehicleDrivingInterfaceComponent.h"
#include "Templates/SubclassOf.h"
#include "SwSpeederBikeDrivingInterfaceComponent.generated.h"

class AActor;
class UPrimitiveComponent;
class USwSpeederBikeDrivingParametersDataAsset;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USwSpeederBikeDrivingInterfaceComponent : public USwVehicleDrivingInterfaceComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnableDebugDraw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USwSpeederBikeDrivingParametersDataAsset> DrivingParamsClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSwSpeederBikeGroundSampleInfoForBlueprint> SpeederBikeGroundSamplesInfoForBP;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwSpeederBikeDrivingComponentOnLandingSignature BlueprintOnLandingEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwSpeederBikeDrivingComponentOnTakeOffSignature BlueprintOnTakeOffEvent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwSpeederBikeAutopilotData m_Autopilot;
    
public:
    USwSpeederBikeDrivingInterfaceComponent();
private:
    UFUNCTION(BlueprintCallable)
    void HandleOnComponentHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    
public:
    UFUNCTION(BlueprintCallable)
    bool BlueprintIsInAir();
    
    UFUNCTION(BlueprintCallable)
    float BlueprintInAirHeight();
    
    UFUNCTION(BlueprintCallable)
    FVector BlueprintGetCurrentSpeederBikeVelocity();
    
    UFUNCTION(BlueprintCallable)
    float BlueprintGetCurrentSpeederBikeSpeed();
    
};

