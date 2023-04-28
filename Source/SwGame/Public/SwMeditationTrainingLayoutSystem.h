#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SwMeditationTrainingLayout.h"
#include "SwMeditationTrainingLayoutSystem.generated.h"

UCLASS(Blueprintable)
class SWGAME_API ASwMeditationTrainingLayoutSystem : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxLayoutSlots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FSwMeditationTrainingLayout> SavedLayouts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 LastUsedLayoutSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bHasUnsavedChanges;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FSwMeditationTrainingLayout CurrentLayout;
    
    ASwMeditationTrainingLayoutSystem();
    UFUNCTION(BlueprintCallable)
    void SaveLayoutToSlot(int32 LayoutSlot, FSwMeditationTrainingLayout LayoutToSave);
    
    UFUNCTION(BlueprintCallable)
    void SaveLayoutSystemToDisk();
    
    UFUNCTION(BlueprintCallable)
    void RequireSavePrompt();
    
    UFUNCTION(BlueprintCallable)
    void LoadLayoutSystemFromDisk();
    
    UFUNCTION(BlueprintCallable)
    void LoadLayoutFromSlot(int32 LayoutSlot, FSwMeditationTrainingLayout& OutLayout);
    
    UFUNCTION(BlueprintCallable)
    void GetLayoutDebugString(FSwMeditationTrainingLayout Layout);
    
};

