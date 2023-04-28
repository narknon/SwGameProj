#pragma once
#include "CoreMinimal.h"
#include "RsAISpawnerPOISettings.generated.h"

class ARsAIPOI;

USTRUCT(BlueprintType)
struct RSGAMETECHRT_API FRsAISpawnerPOISettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARsAIPOI* POIToUseWhenSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bSpawnAtPOIPoint: 1;
    
    FRsAISpawnerPOISettings();
};

