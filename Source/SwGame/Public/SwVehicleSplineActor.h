#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SwVehicleSplineActor.generated.h"

class USceneComponent;
class USplineComponent;

UCLASS(Blueprintable)
class ASwVehicleSplineActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineComponent* SplineComponent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* SceneComponent;
    
public:
    ASwVehicleSplineActor();
};

