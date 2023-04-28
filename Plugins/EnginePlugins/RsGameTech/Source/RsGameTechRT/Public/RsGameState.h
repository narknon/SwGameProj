#pragma once
#include "CoreMinimal.h"
#include "DialoguePlayedData.h"
#include "GameFramework/GameState.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "ERsDifficulty.h"
#include "ERsTotalPlayTimeMode.h"
#include "RsDifficultyChangedDelegateDelegate.h"
#include "RsEncounterInstanceDelegateDelegate.h"
#include "RsLevelTagChangeInfo.h"
#include "RsPhotoModeToggledDelegateDelegate.h"
#include "RsGameState.generated.h"

class AActor;
class ARsGameState;
class UObject;

UCLASS(Blueprintable)
class ARsGameState : public AGameState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsEncounterInstanceDelegate OnNewEncounterInstance;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsDifficultyChangedDelegate OnDifficultyChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsPhotoModeToggledDelegate OnPhotoModeToggled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TSet<int32> PlayedDialogueIDs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TMap<int32, FDialoguePlayedData> PlayedDialogueIDsToPlayData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TSet<int32> PlayedLineUIDs;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer DefaultLevelTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer LevelTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FRsLevelTagChangeInfo> DeferredOnLevelTagChangedCalls;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 EncountersInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    ERsDifficulty Difficulty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    uint8 SaveSlotIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    float PlayTimeSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    float PlayTimeWithPausesSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FString CurrentActivity;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TWeakObjectPtr<UObject>, ERsTotalPlayTimeMode> PlayTimeModeRequests;
    
public:
    ARsGameState();
    UFUNCTION(BlueprintCallable)
    void StopTutorial();
    
    UFUNCTION(BlueprintCallable)
    void StopMapAutoPlay();
    
    UFUNCTION(BlueprintCallable)
    void StartTutorial();
    
    UFUNCTION(BlueprintCallable)
    void StartMapAutoPlay();
    
    UFUNCTION(BlueprintCallable)
    void SetSaveSlot(uint8 SaveSlot);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayTimeCountingMode(UObject* Requester, ERsTotalPlayTimeMode NewPlayTimeMode);
    
    UFUNCTION(BlueprintCallable)
    void SetLevelTag(FGameplayTag Tag, bool bNewValue, bool bSaveImmediate, bool bDebug);
    
    UFUNCTION(BlueprintCallable)
    void SetIsInHoloTable(bool bNewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetDifficulty(ERsDifficulty NewDifficulty);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentActivity(const FString& NewActivity);
    
    UFUNCTION(BlueprintCallable)
    void RemoveLevelTag(FGameplayTag Tag, bool bSaveImmediate, bool bDebug);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHeroDied(AActor* DeathActor);
    
public:
    UFUNCTION(BlueprintCallable)
    void NativeOnHeroDied(AActor* DeathActor);
    
    UFUNCTION(BlueprintCallable)
    void MarkCurrentActivityComplete();
    
    UFUNCTION(BlueprintCallable)
    void LogPlayedDialogue(int32 SceneID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTutorialInProgress() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMapAutoPlayInProgress() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInMeditationTraining() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInHoloTable() const;
    
    UFUNCTION(BlueprintCallable)
    void IncrementEncountersInstance();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasLevelTag(const FGameplayTag Tag, bool bExactMatch) const;
    
    UFUNCTION(BlueprintCallable)
    bool HasDialogueBeenPlayed(int32 SceneID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAnyLevelTag(FGameplayTagContainer TagsToCheck, bool bExactMatch) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAllLevelTags(FGameplayTagContainer TagsToCheck, bool bExactMatch) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTotalPlayTimeWithPausesInSeconds() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTotalPlayTimeInSeconds() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    uint8 GetSaveSlotCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    uint8 GetSaveSlot() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static ARsGameState* GetRsGameState(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetEncountersInstance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ERsDifficulty GetDifficulty() const;
    
    UFUNCTION(BlueprintCallable)
    FGameplayTagContainer GetCurrentLevelTags();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString DebugGetCurrentLevelTags() const;
    
    UFUNCTION(BlueprintCallable)
    void DebugClearPlayedDialogue();
    
    UFUNCTION(BlueprintCallable)
    void ClearCurrentActivity();
    
    UFUNCTION(BlueprintCallable)
    void ClearAllLevelTags(bool bSaveImmediate, bool bDebug);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnStateLoaded();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnPreSaveGame();
    
    UFUNCTION(BlueprintCallable)
    void AddLevelTag(FGameplayTag Tag, bool bSaveImmediate, bool bDebug);
    
};

