#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SwGardenSeedFoliageInfo.h"
#include "SwGardenSeedSpawnerData.generated.h"

UCLASS(Blueprintable)
class USwGardenSeedSpawnerData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSwGardenSeedFoliageInfo> SeedSpawnInfos;
    
    USwGardenSeedSpawnerData();
};

