#pragma once
#include "CoreMinimal.h"
#include "SwMeditationTrainingWaveSetting.generated.h"

class UDataTable;

USTRUCT(BlueprintType)
struct SWGAME_API FSwMeditationTrainingWaveSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WaveTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WavePreparationTimer;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 MaxWaves;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 MaxToken;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 TokenIncrease;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* WaveDefinition;
    
    FSwMeditationTrainingWaveSetting();
};

