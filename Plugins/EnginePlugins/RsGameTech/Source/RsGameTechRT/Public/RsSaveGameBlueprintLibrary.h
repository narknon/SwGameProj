#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "RsSaveGameInfo.h"
#include "RsSaveGameBlueprintLibrary.generated.h"

class AActor;
class ARsStreamingAreaPlayerStart;
class UActorComponent;
class UObject;
class URsGlobalSaveDataBase;
class URsSaveGameMetaDataObject;
class URsStreamingDefinition;

UCLASS(Blueprintable)
class URsSaveGameBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URsSaveGameBlueprintLibrary();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void WriteGlobalSaveDataToDisk(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void SetSaveSlot(UObject* WorldContext, uint8 SaveSlot);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void SavePlayerStart(UObject* WorldContext, FTransform PlayerStartTransform);
    
    UFUNCTION(BlueprintCallable)
    static void SaveContainingLevelImmediate(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static void SaveContainingLevel(AActor* Actor, bool bIsPendingCheckpoint);
    
    UFUNCTION(BlueprintCallable)
    static void SaveComponentImmediate(UActorComponent* Component);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void SaveCheckpointWithPlayerStartInfo(UObject* WorldContext, const URsStreamingDefinition* RootStreamingLevelDefinition, FName PlayerStartName);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void SaveCheckpointWithPlayerStart(UObject* WorldContext, ARsStreamingAreaPlayerStart* PlayerStart);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void SaveCheckpoint(UObject* WorldContext, FTransform PlayerStartTransform);
    
    UFUNCTION(BlueprintCallable)
    static void SaveActorPropertyImmediate(AActor* Actor, FName PropertyName);
    
    UFUNCTION(BlueprintCallable)
    static void SaveActorImmediate(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static void SaveActor(AActor* Actor, bool bIsPendingCheckpoint);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void ResetPendingSaves(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void ReloadLastCheckpoint(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void RefreshCachedSaveFileInfo(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void RefreshCachedNewGamePlusUnlocks(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static bool LoadSaveGameValidWorldStateBackupForSlot(UObject* WorldContext, uint8 SaveSlotIndex);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static bool LoadSaveGameForSlot(UObject* WorldContext, uint8 SaveSlotIndex);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static bool LoadSaveGameBackupForSlot(UObject* WorldContext, uint8 SaveSlotIndex);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static bool LoadSaveGame(UObject* WorldContext, const FString& SaveName);
    
    UFUNCTION(BlueprintCallable)
    static void LoadContainingLevel(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static bool LoadActor(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static bool IsSavingToDisk(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static bool IsRefreshingCachedNewGamePlusUnlocks(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static bool IsLoadingSaveFileInfo(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static bool IsCurrentSaveNewGamePlus(const UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static bool IsClearingCurrentSavedProgress(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static int32 GetTimeInSecondsSinceLastSave(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static uint8 GetSaveSlotCount(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static uint8 GetSaveSlot(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static URsStreamingDefinition* GetSaveGameStreamingInfo(UObject* WorldContext, uint8 SaveSlot, FName& OutStreamingPlayerStartName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static uint8 GetMostRecentSaveSlot(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static URsGlobalSaveDataBase* GetGlobalSaveData(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void GetExistingSaveGames(UObject* WorldContext, TArray<FRsSaveGameInfo>& OutSaveGames, bool bAllowNonSlotSaves, bool bSortByTime);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static bool GetCurrentWorldStateBackupSaveGameInfo(UObject* WorldContext, FRsSaveGameInfo& OutSaveGameInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static int32 GetCurrentTotalTimePlayedForSaveGame(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static URsSaveGameMetaDataObject* GetCurrentSaveGameMetaData(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static bool GetCurrentSaveGameInfo(UObject* WorldContext, FRsSaveGameInfo& OutSaveGameInfo);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static bool GetCurrentSavedCheckpointPlayerStartInfo(UObject* WorldContext, URsStreamingDefinition*& OutRootStreamingLevelDefinition, FName& OutPlayerStartName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static bool GetCurrentBackupSaveGameInfo(UObject* WorldContext, FRsSaveGameInfo& OutSaveGameInfo);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static bool DoesSaveGameValidWorldStateBackupExistForSlot(UObject* WorldContext, uint8 SaveSlotIndex);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static bool DoesSaveGameExistForSlot(UObject* WorldContext, uint8 SaveSlotIndex, bool bIncludeBackup);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static bool DoesSaveGameExist(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static bool DoesSaveGameBackupExistForSlot(UObject* WorldContext, uint8 SaveSlotIndex);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void ConfirmPendingSaves(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void ClearCurrentSavedProgress(UObject* WorldContext);
    
};

