#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RsWorldMapActor.h"
#include "RsWorldMapBreadCrumbRingBuffer.h"
#include "RsWorldMapBreadCrumbSettings.h"
#include "RsWorldMapBreadCrumbsActor.generated.h"

class UCurveFloat;
class URsWorldMapTrailComponent;
class USplineComponent;

UCLASS(Blueprintable)
class ARsWorldMapBreadCrumbsActor : public ARsWorldMapActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FRsWorldMapBreadCrumbRingBuffer BreadCrumbBuffer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FRsWorldMapBreadCrumbSettings BreadCrumbSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SaveGame, meta=(AllowPrivateAccess=true))
    URsWorldMapTrailComponent* BreadCrumbTrail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SaveGame, meta=(AllowPrivateAccess=true))
    USplineComponent* SplineComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> BreadCrumbLocations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* ZoomSizeCurve;
    
    ARsWorldMapBreadCrumbsActor();
    UFUNCTION(BlueprintCallable)
    void RebuildTestTrail();
    
};

