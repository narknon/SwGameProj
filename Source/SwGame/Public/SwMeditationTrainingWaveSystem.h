#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SwMeditationTrainingWaveSetting.h"
#include "SwMeditationTrainingWaveSystem.generated.h"

UCLASS(Abstract, Blueprintable)
class SWGAME_API ASwMeditationTrainingWaveSystem : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FSwMeditationTrainingWaveSetting> WaveSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Activator;
    
public:
    ASwMeditationTrainingWaveSystem();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWaveInPreparation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetWaveTimerRemaining() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetWavePreparationTimerRemaining() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetWaveNumber() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FString> GetWaveKeys() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetWaveEndCondition() const;
    
};

