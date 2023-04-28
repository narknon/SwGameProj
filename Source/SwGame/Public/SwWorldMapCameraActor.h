#pragma once
#include "CoreMinimal.h"
#include "Camera/CameraActor.h"
#include "ESwWorldMapCameraState.h"
#include "SwSphericalCoordinateData.h"
#include "SwWorldMapCameraControls.h"
#include "SwWorldMapCameraInterpolationData.h"
#include "SwWorldMapCameraActor.generated.h"

class USwWorldMapCameraComponent;
class USwWorldMapHologramSettings;

UCLASS(Blueprintable)
class SWGAME_API ASwWorldMapCameraActor : public ACameraActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwWorldMapCameraControls Controls;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwSphericalCoordinateData SphericalCoordinateData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    ESwWorldMapCameraState CameraState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeToTransitionHeightAfterElevationChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSwWorldMapCameraInterpolationData CameraInterpolationData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USwWorldMapHologramSettings* RuntimeSettings;
    
    ASwWorldMapCameraActor();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USwWorldMapCameraComponent* GetWorldMapCameraComponent() const;
    
};

