#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "RsWorldMapCollectableCountArray.h"
#include "RsWorldMapPlanetCollectibleData.h"
#include "RsWorldMapGlobalPlanetData.generated.h"

UCLASS(Blueprintable)
class URsWorldMapGlobalPlanetData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName WorldName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsWorldMapPlanetCollectibleData CollectibleData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsWorldMapCollectableCountArray CollectablesTotal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MapSectionTotals;
    
    URsWorldMapGlobalPlanetData();
};

