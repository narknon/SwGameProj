#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "ERsHeroLoadoutFlags.h"
#include "Input/Events.h"
#include "Components/SlateWrapperTypes.h"
#include "ESwMeditationTrainingHeroModifier.h"
#include "ESwMeditationTrainingState.h"
#include "SwMeditationTrainingAllAiSpawnedDelegate.h"
#include "SwMeditationTrainingEnemyCountChangedEventDelegate.h"
#include "SwMeditationTrainingEnemyData.h"
#include "SwMeditationTrainingEnemySpawnedEventDelegate.h"
#include "SwMeditationTrainingExitMenuEventDelegate.h"
#include "SwMeditationTrainingHeroModifierChangedEventDelegate.h"
#include "SwMeditationTrainingInputPressedEventDelegate.h"
#include "SwMeditationTrainingLayout.h"
#include "SwMeditationTrainingLayoutChangedEventDelegate.h"
#include "SwMeditationTrainingModifier.h"
#include "SwMeditationTrainingRemoveModifiersEventDelegate.h"
#include "SwMeditationTrainingSpawnedEnemyInfo.h"
#include "SwMeditationTrainingStateChangedEventDelegate.h"
#include "SwMeditationTrainingUpdateCostPointsEventDelegate.h"
#include "Templates/SubclassOf.h"
#include "SwMeditationTrainingManager.generated.h"

class ARsAICharacter;
class ARsPlayerController;
class ASwHero;
class ASwMeditationTrainingArena;
class ASwMeditationTrainingCamera;
class ASwMeditationTrainingCursor;
class ASwMeditationTrainingGrid;
class ASwMeditationTrainingLayoutSystem;
class ASwMeditationTrainingSpectator;
class UAkAudioEvent;
class UAkComponent;
class UDataTable;
class UTexture2D;

UCLASS(Abstract, Blueprintable)
class SWGAME_API ASwMeditationTrainingManager : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwMeditationTrainingAllAiSpawned OnAllAiSpawned;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxCostPointsAvailable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentCostPointsAvailable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverwritePrePopulatedEnemySet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsSpectating;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsLeavingMeditationTraining;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName CurrentArenaName;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwMeditationTrainingExitMenuEvent OnExitMenuEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwMeditationTrainingRemoveModifiersEvent OnRemoveModifiersEvent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NoClear, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASwMeditationTrainingCamera> SpawnCameraClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NoClear, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASwMeditationTrainingCursor> SpawnCursorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NoClear, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASwMeditationTrainingGrid> SpawnGridClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NoClear, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASwMeditationTrainingArena> SpawnArenaClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NoClear, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASwMeditationTrainingLayoutSystem> LayoutSystemClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NoClear, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASwMeditationTrainingSpectator> SpectatorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSwMeditationTrainingEnemyData> SpawnableEnemyTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* EnemySetData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> TestingTemp_MeditationTrainingUnlockTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector SpawnGridStartingOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseLegacyInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AddAiActionInputName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SecondaryConfirmActionInputName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TertiaryConfirmActionInputName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CancelActionInputName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RemoveAiActionInputName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PlayActionInputName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PauseActionInputName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName NextAiActionInputName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PreviousAiActionInputName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DownActionInputName_DPad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DownActionInputName_LeftStick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName UpActionInputName_DPad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName UpActionInputName_LeftStick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LeftActionInputName_DPad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LeftActionInputName_LeftStick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RightActionInputName_DPad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RightActionInputName_LeftStick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName UpActionInputName_RightStick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DownActionInputName_RightStick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASwHero* PlayerCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeBeforeEndCombat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CurrentGridSizePresetLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntPoint DefaultGridSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESwMeditationTrainingHeroModifier, FSwMeditationTrainingModifier> HeroModifiers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESwMeditationTrainingHeroModifier, UTexture2D*> HeroModifiersIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ERsHeroLoadoutFlags> MeditationTrainingForceUnlockTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASwMeditationTrainingCamera* SpawnCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASwMeditationTrainingCursor* SpawnCursor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASwMeditationTrainingGrid* SpawnGrid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkComponent* AudioComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* Audio_Sound_NoCostPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* VoidTearExit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASwMeditationTrainingLayoutSystem* LayoutSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASwMeditationTrainingSpectator* Spectator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HoldTimeClearAll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsPreparingBattle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsRestarting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsLoading;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform Spawnpoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle PlayerDeathTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle AllAiDeathTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsButtonPressed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle HoldButtonTimerHandle;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwMeditationTrainingUpdateCostPointsEvent OnUpdateCurrentCostPointsEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwMeditationTrainingLayoutChangedEvent OnLayoutChangedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwMeditationTrainingStateChangedEvent OnMeditationTrainingStateChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwMeditationTrainingHeroModifierChangedEvent OnMeditationTrainingHeroModifierChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwMeditationTrainingInputPressedEvent OnCancelPressedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwMeditationTrainingInputPressedEvent OnNextAiPressedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwMeditationTrainingInputPressedEvent OnPreviousEventPressedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwMeditationTrainingInputPressedEvent OnAddAiEventPressedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwMeditationTrainingInputPressedEvent OnRemoveAiEventPressedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwMeditationTrainingEnemySpawnedEvent OnEnemySpawnedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwMeditationTrainingEnemyCountChangedEvent OnEnemyCountChangedEvent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARsPlayerController* PlayerController;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESwMeditationTrainingState previousMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESwMeditationTrainingState CurrentMode;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FVector2D, FSwMeditationTrainingSpawnedEnemyInfo> SpawnedEnemiesMap;
    
public:
    ASwMeditationTrainingManager();
protected:
    UFUNCTION(BlueprintCallable)
    void UnbindInputactionBeginTraining();
    
    UFUNCTION(BlueprintCallable)
    FEventReply TryProcessMouseClick(const FPointerEvent& MouseEvent);
    
    UFUNCTION(BlueprintCallable)
    void ToggleSpectatorController(bool bEnableSpectator);
    
public:
    UFUNCTION(BlueprintCallable)
    void SwitchMode(ESwMeditationTrainingState newMode);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StopTimerFillCircle();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartTimerFillCircle();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartEditingMode();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartChallengeMode();
    
    UFUNCTION(BlueprintCallable)
    void SpectatorShowAllHiddenComponents();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SpectatorSetHeroSpectatorMode(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SpectatorHideComponents(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void SetVisibilitySpawnedEnemies(bool bHide);
    
    UFUNCTION(BlueprintCallable)
    void SetupEnemySetData();
    
    UFUNCTION(BlueprintCallable)
    void SetSpectatorModeEnabled(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetSpawnGridSize(FIntPoint NewGridSize);
    
    UFUNCTION(BlueprintCallable)
    void SetEnemiesIgnorePlayer(bool bShouldIgnore);
    
public:
    UFUNCTION(BlueprintCallable)
    void ReviveHero(bool bDespawnAi);
    
    UFUNCTION(BlueprintCallable)
    void RevertActiveHeroModifiers();
    
protected:
    UFUNCTION(BlueprintCallable)
    void ResetLayout();
    
    UFUNCTION(BlueprintCallable)
    void ResetGrid(bool bResetGridSize);
    
    UFUNCTION(BlueprintCallable)
    void PlaySoundEffect(UAkAudioEvent* InSoundEffect);
    
    UFUNCTION(BlueprintCallable)
    void PlayCombat();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStartPressed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStartCombat();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnScrollEnemiesUpPressed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnScrollEnemiesDownPressed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnReturnToBattleSelect();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPreviousArenaSizePressed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNextArenaSizePressed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNavigateUpPressed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMeditationTrainingModifierReverted(ASwHero* InHero, ESwMeditationTrainingHeroModifier InModifierKey);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMeditationTrainingModifierApplied(ASwHero* InHero, ESwMeditationTrainingHeroModifier InModifierKey);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInitialized(ARsPlayerController* PlayerControllerUsed);
    
    UFUNCTION(BlueprintCallable)
    void OnEnemyDeath(AActor* DeadActor);
    
    UFUNCTION(BlueprintCallable)
    void OnCursorMovement(const FVector& NewLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCombatFinished();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAsyncLoadEnemySetDataComplete();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAsyncLoadEnemyComplete(int32 EnemyIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnAllAiDead();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnAiSpawnedByATST(ARsAICharacter* AICharacter);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAcceptArenaSizePressed();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSpectatingModifierEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSpawnQueueEmpty() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMouseInputActive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsButtonPressed() const;
    
public:
    UFUNCTION(BlueprintCallable)
    void Initialize(AActor* InVoidTearExit, ASwHero* InPlayerCharacter, ARsPlayerController* InPlayerController);
    
    UFUNCTION(BlueprintCallable)
    void IncrementHeroModifier(ESwMeditationTrainingHeroModifier InModifierKey);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    AActor* GetSpawnedActorOwner() const;
    
public:
    UFUNCTION(BlueprintCallable)
    int32 GetSelectedEnemyCost(FSwMeditationTrainingEnemyData InEnemy);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPercentageButtonHeld() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetEnemyCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetDeathCount() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float GetCharacterMinHealth(ASwHero* InHero);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float GetCharacterMinFocus(ASwHero* InHero);
    
public:
    UFUNCTION(BlueprintCallable)
    void DisableAllHeroModifiers();
    
    UFUNCTION(BlueprintCallable)
    void Deactivate();
    
protected:
    UFUNCTION(BlueprintCallable)
    void CaptureCurrentModifiers(FSwMeditationTrainingLayout& Layout);
    
    UFUNCTION(BlueprintCallable)
    void CaptureCurrentLayout(FSwMeditationTrainingLayout& Layout);
    
    UFUNCTION(BlueprintCallable)
    void BindInputactionBeginTraining();
    
public:
    UFUNCTION(BlueprintCallable)
    void ApplySelectedHeroModifiers();
    
protected:
    UFUNCTION(BlueprintCallable)
    void ApplyLayout(FSwMeditationTrainingLayout Layout);
    
private:
    UFUNCTION(BlueprintCallable)
    void AddOrRemoveAiFromCurrentCursorPosition();
    
protected:
    UFUNCTION(BlueprintCallable)
    void AddEnemy(const FSwMeditationTrainingEnemyData& AiToSpawn);
    
public:
    UFUNCTION(BlueprintCallable)
    void ActivateAllEnemies(bool bActivate);
    
};

