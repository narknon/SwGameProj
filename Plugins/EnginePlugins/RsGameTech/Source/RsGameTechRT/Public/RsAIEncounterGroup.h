#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "ERsAIAwakeState.h"
#include "ERsAIDespawnReason.h"
#include "ERsAIEncounterSpawnResult.h"
#include "ERsAIGroupAwakeState.h"
#include "ERsAISpawnResult.h"
#include "RsAIEncounterBoundingCylinder.h"
#include "RsAIEncounterMemberData.h"
#include "RsOnEncounterAIEventDelegate.h"
#include "RsOnEncounterGroupEventDelegate.h"
#include "RsAIEncounterGroup.generated.h"

class ARsAICharacter;
class ARsAICharacterSpawner;
class ARsAIPOI;
class ARsAISpawner;
class ARsAIStagedSpawner;
class ARsTriggerBase;
class ATriggerBase;
class AVolume;
class URsBaseTriggerComponent;
class URsTargetableComponent;
class USceneComponent;

UCLASS(Blueprintable)
class ARsAIEncounterGroup : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ARsAICharacterSpawner*> AISpawners;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ARsAIStagedSpawner*> AIStagedSpawners;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagQuery RequiredTagQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoSpawnGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideEncounterReset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ATriggerBase*> SpawnTriggers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ARsTriggerBase*> RsSpawnTriggers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsAIEncounterBoundingCylinder AwakeCylinder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsAIEncounterBoundingCylinder AsleepCylinder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsAIEncounterBoundingCylinder SemiSleepCylinder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AVolume*> OverrideSemiSleepVolumes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AVolume*> OverrideAwakeVolumes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AVolume*> OverrideAsleepVolumes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ARsAIPOI*> poiArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MasterEncounterKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsBountyHunterEncounter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bKeepFromSemiSleepWhenAwake;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsSemiSleepEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* SceneComponent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsOnEncounterGroupEvent OnEncounterGroupSpawnComplete;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsOnEncounterGroupEvent OnEncounterGroupAllDied;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsOnEncounterAIEvent OnEncounterAIDied;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsOnEncounterGroupEvent OnEncounterGroupAllDefeated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsOnEncounterGroupEvent OnEncounterGroupAwakened;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsOnEncounterGroupEvent OnEncounterGroupAsleep;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsOnEncounterGroupEvent OnEncounterGroupSemiSleep;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ARsAICharacter*> SpawnedAIArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ERsAIEncounterSpawnResult> EncounterSpawnResult;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bIsActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ERsAIGroupAwakeState> GroupAwakeState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnteredAsleepCylinder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TMap<TSoftObjectPtr<ARsAISpawner>, FRsAIEncounterMemberData> EncounterMemberMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TMap<ARsAICharacter*, TEnumAsByte<ERsAIAwakeState::Type>> MasterSequenceAIMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 EncounterInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ActiveSpawnerCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TotalSpawnerCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SpawnedAICount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FailedToSpawnAICount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AwakeAICount;
    
public:
    ARsAIEncounterGroup();
    UFUNCTION(BlueprintCallable)
    bool SpawnEncounterGroup();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ShouldSemiAsleepAI(ARsAICharacter* InAICharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ShouldAwakenAI(ARsAICharacter* InAICharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ShouldAsleepAI(ARsAICharacter* InAICharacter);
    
    UFUNCTION(BlueprintCallable)
    void ResetEncounterGroup();
    
    UFUNCTION(BlueprintCallable)
    void RequestResetAndAutoSpawn();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnSpawnTriggerOverlap(AActor* OverlappedActor, AActor* OtherActor);
    
    UFUNCTION(BlueprintCallable)
    void OnRsSpawnTriggerOverlap(URsBaseTriggerComponent* TriggerComponent, AActor* OtherActor);
    
    UFUNCTION(BlueprintCallable)
    void OnPreFactionChange(URsTargetableComponent* TargetableComponent, FGameplayTag PreviousFactionTag, FGameplayTag NewFactionTag);
    
    UFUNCTION(BlueprintCallable)
    void OnCorpseRemoved(ARsAICharacter* AICharacter);
    
    UFUNCTION(BlueprintCallable)
    void OnAISpawned(ARsAICharacter* SpawnedAI, TEnumAsByte<ERsAISpawnResult::Type> SpawnResult);
    
    UFUNCTION(BlueprintCallable)
    void OnAIDespawned(ARsAICharacter* DespawnedAI, TEnumAsByte<ERsAIDespawnReason::Type> DespawnReason);
    
    UFUNCTION(BlueprintCallable)
    void OnAIChangedArea(ARsAICharacter* InAI, bool bIsSpawningArea);
    
};

