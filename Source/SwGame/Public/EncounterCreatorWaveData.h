#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EncounterCreatorWaveData.generated.h"

class ARsAIStagedSpawner;
class URsAICharacterDefinition;

USTRUCT(BlueprintType)
struct FEncounterCreatorWaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<URsAICharacterDefinition*> Spawners;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<ARsAIStagedSpawner>> StagedSpawners;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentWaveDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NextWaveDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EnemiesRemainingForNextWave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IncludeAIInEnemiesRemaining;
    
    SWGAME_API FEncounterCreatorWaveData();
};

