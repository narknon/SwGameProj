#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "ShipLaneFlybyAudioData.h"
#include "SwShippingLaneAudioManagerComponent.generated.h"

class AActor;
class UObject;
class USwShippingLaneAudioManagerComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USwShippingLaneAudioManagerComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FShipLaneFlybyAudioData> FlybyAudioDataArray;
    
public:
    USwShippingLaneAudioManagerComponent();
    UFUNCTION(BlueprintCallable)
    void UpdateSplineLocation(AActor* SplineOwner, const FVector& ClosestLocationToPlayer, const float DistSqr);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USwShippingLaneAudioManagerComponent* Get(UObject* WorldContextObject);
    
};

