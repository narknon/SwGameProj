#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "SwMeditationTrainingWaveEnemyEntry.generated.h"

class URsAICharacterDefinition;

USTRUCT(BlueprintType)
struct SWGAME_API FSwMeditationTrainingWaveEnemyEntry : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URsAICharacterDefinition* EnemyType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 SpawnMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 SpawnMax;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 TokenCost;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 Probability;
    
    FSwMeditationTrainingWaveEnemyEntry();
};

