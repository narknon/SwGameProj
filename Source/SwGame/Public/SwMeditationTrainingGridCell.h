#pragma once
#include "CoreMinimal.h"
#include "Engine/StaticMeshActor.h"
#include "ESwMeditationTrainingCellStatusFlags.h"
#include "SwMeditationTrainingGridCell.generated.h"

UCLASS(Abstract, Blueprintable)
class SWGAME_API ASwMeditationTrainingGridCell : public AStaticMeshActor {
    GENERATED_BODY()
public:
    ASwMeditationTrainingGridCell();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTriedToSpawnWithNoPoints();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStatusChanged(ESwMeditationTrainingCellStatusFlags Status, bool bNewValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasStatus(ESwMeditationTrainingCellStatusFlags Status) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAnyStatus(ESwMeditationTrainingCellStatusFlags Flags) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAllStatus(ESwMeditationTrainingCellStatusFlags Flags) const;
    
};

