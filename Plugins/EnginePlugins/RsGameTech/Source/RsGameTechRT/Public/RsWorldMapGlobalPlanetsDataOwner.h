#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RsWorldMapCollectableCountArray.h"
#include "RsWorldMapGlobalPlanetCollectibleData.h"
#include "RsWorldMapGlobalPlanetsDataOwner.generated.h"

class URsWorldMapGlobalPlanetData;

UCLASS(Blueprintable)
class ARsWorldMapGlobalPlanetsDataOwner : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TMap<FName, FRsWorldMapCollectableCountArray> PerPlanetCollectablesAcquired;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TMap<FName, int32> PerPlanetMapSectionsExplored;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, URsWorldMapGlobalPlanetData*> GlobalPlanetDataMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, FRsWorldMapGlobalPlanetCollectibleData> PlanetToCollectibleData;
    
public:
    ARsWorldMapGlobalPlanetsDataOwner();
};

