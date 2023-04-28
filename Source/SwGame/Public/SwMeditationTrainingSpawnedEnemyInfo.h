#pragma once
#include "CoreMinimal.h"
#include "SwMeditationTrainingEnemyData.h"
#include "SwMeditationTrainingSpawnedEnemyInfo.generated.h"

class AActor;
class ARsAICharacter;

USTRUCT(BlueprintType)
struct SWGAME_API FSwMeditationTrainingSpawnedEnemyInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARsAICharacter* SpawnedEnemy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* SpawnedNonCharActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwMeditationTrainingEnemyData EnemyData;
    
    FSwMeditationTrainingSpawnedEnemyInfo();
};

