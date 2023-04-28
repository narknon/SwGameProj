#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "EShipLaneShipTypes.h"
#include "ShipLaneShips.h"
#include "Templates/SubclassOf.h"
#include "SwShippingLaneActor.generated.h"

class UAkAudioEvent;
class UAkComponent;
class UDataTable;
class UMaterialInstance;
class USceneComponent;
class USplineComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class ASwShippingLaneActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineComponent* SplineComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ConsiderForFlybys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* ShipDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool RequestLaneStop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInstance> BackupShipMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool OscillationEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatRange OscillationDistanceRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatRange OscillationSpeedRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool OscillationSpeedIsSetOnSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool OscillationRangeIsSetOnSpawn;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsActiveForFlybys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsActiveForSpread;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> ValidSmallMedShipIndexes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* BackgroundSplineSpreadAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<bool> SpawnedShipsRequestedFlybys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<EShipLaneShipTypes> SpawnedShipsSizes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AActor*> ActiveActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FVector> Offsets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<float> SplineLocs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UStaticMeshComponent*> ActiveStaticMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinNumShipsBetweenLargeShips;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FShipLaneShips> ValidShips;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<AActor>> ShipClassArray;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UStaticMeshComponent*> DormantStaticMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FVector> OscillationOffsets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<float> OscillationProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<float> OscillationSpeeds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<float> OscillationRanges;
    
public:
    ASwShippingLaneActor();
    UFUNCTION(BlueprintCallable)
    void StopShipLaneInstant();
    
    UFUNCTION(BlueprintCallable)
    void StartShipLaneFull();
    
    UFUNCTION(BlueprintCallable)
    void StartShipLane();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SplinePercBPEvent(const AActor* SpawnedShipActor, const float SplinePercentage);
    
public:
    UFUNCTION(BlueprintCallable)
    void SpawnShip(const float DistanceAlongSpline);
    
    UFUNCTION(BlueprintCallable)
    void SetupShipLaneShipOptions(float maxDistFromSpline, FRotator relativeRot, float shipScaleMultiplier);
    
    UFUNCTION(BlueprintCallable)
    void SetupShipLaneOptions(FFloatRange timeBetweenShips, float laneSpeed);
    
    UFUNCTION(BlueprintCallable)
    void SetupShipLaneClasses(TArray<TSubclassOf<AActor>> shipClasses, bool useClasses);
    
    UFUNCTION(BlueprintCallable)
    void SetupShipLaneBase(bool autoStartLane, bool smallShips, bool mediumShips, bool largeShips);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupAudioOnClass(const AActor* SpawnedShipActor);
    
public:
    UFUNCTION(BlueprintCallable)
    void RequestStopShipLane();
    
    UFUNCTION(BlueprintCallable)
    void RequestFlyByOnComponent(USceneComponent* TargetComponent, UAkAudioEvent* EventToPost, const FString& SwitchValue);
    
    UFUNCTION(BlueprintCallable)
    void OnManagerSetActiveFlybySpline(AActor* ActiveActor);
    
    UFUNCTION(BlueprintCallable)
    void OnManagerSetActiveBackgroundSpreadSpline(AActor* NewActiveActor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnActiveBackgroundSpreadSplineChanged();
    
    UFUNCTION(BlueprintCallable)
    void MarkAkComponentForDestroy(UAkComponent* TargetComponent);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AudioTickEvent();
    
};

