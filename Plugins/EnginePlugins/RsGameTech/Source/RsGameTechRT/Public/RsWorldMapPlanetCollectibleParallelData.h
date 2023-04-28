#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "ERsWorldMapCollectableType.h"
#include "RsWorldMapPlanetCollectibleParallelData.generated.h"

USTRUCT(BlueprintType)
struct FRsWorldMapPlanetCollectibleParallelData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> LevelTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> MapRegion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> MapSector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ERsWorldMapCollectableType> CollectibleTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSoftObjectPath> ComponentIDs;
    
    RSGAMETECHRT_API FRsWorldMapPlanetCollectibleParallelData();
};

