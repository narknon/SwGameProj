#include "RsSaveGameBlueprintLibrary.h"

void URsSaveGameBlueprintLibrary::WriteGlobalSaveDataToDisk(UObject* WorldContext) {
}

void URsSaveGameBlueprintLibrary::SetSaveSlot(UObject* WorldContext, uint8 SaveSlot) {
}

void URsSaveGameBlueprintLibrary::SavePlayerStart(UObject* WorldContext, FTransform PlayerStartTransform) {
}

void URsSaveGameBlueprintLibrary::SaveContainingLevelImmediate(AActor* Actor) {
}

void URsSaveGameBlueprintLibrary::SaveContainingLevel(AActor* Actor, bool bIsPendingCheckpoint) {
}

void URsSaveGameBlueprintLibrary::SaveComponentImmediate(UActorComponent* Component) {
}

void URsSaveGameBlueprintLibrary::SaveCheckpointWithPlayerStartInfo(UObject* WorldContext, const URsStreamingDefinition* RootStreamingLevelDefinition, FName PlayerStartName) {
}

void URsSaveGameBlueprintLibrary::SaveCheckpointWithPlayerStart(UObject* WorldContext, ARsStreamingAreaPlayerStart* PlayerStart) {
}

void URsSaveGameBlueprintLibrary::SaveCheckpoint(UObject* WorldContext, FTransform PlayerStartTransform) {
}

void URsSaveGameBlueprintLibrary::SaveActorPropertyImmediate(AActor* Actor, FName PropertyName) {
}

void URsSaveGameBlueprintLibrary::SaveActorImmediate(AActor* Actor) {
}

void URsSaveGameBlueprintLibrary::SaveActor(AActor* Actor, bool bIsPendingCheckpoint) {
}

void URsSaveGameBlueprintLibrary::ResetPendingSaves(UObject* WorldContext) {
}

void URsSaveGameBlueprintLibrary::ReloadLastCheckpoint(UObject* WorldContext) {
}

void URsSaveGameBlueprintLibrary::RefreshCachedSaveFileInfo(UObject* WorldContext) {
}

void URsSaveGameBlueprintLibrary::RefreshCachedNewGamePlusUnlocks(UObject* WorldContext) {
}

bool URsSaveGameBlueprintLibrary::LoadSaveGameValidWorldStateBackupForSlot(UObject* WorldContext, uint8 SaveSlotIndex) {
    return false;
}

bool URsSaveGameBlueprintLibrary::LoadSaveGameForSlot(UObject* WorldContext, uint8 SaveSlotIndex) {
    return false;
}

bool URsSaveGameBlueprintLibrary::LoadSaveGameBackupForSlot(UObject* WorldContext, uint8 SaveSlotIndex) {
    return false;
}

bool URsSaveGameBlueprintLibrary::LoadSaveGame(UObject* WorldContext, const FString& SaveName) {
    return false;
}

void URsSaveGameBlueprintLibrary::LoadContainingLevel(AActor* Actor) {
}

bool URsSaveGameBlueprintLibrary::LoadActor(AActor* Actor) {
    return false;
}

bool URsSaveGameBlueprintLibrary::IsSavingToDisk(UObject* WorldContext) {
    return false;
}

bool URsSaveGameBlueprintLibrary::IsRefreshingCachedNewGamePlusUnlocks(UObject* WorldContext) {
    return false;
}

bool URsSaveGameBlueprintLibrary::IsLoadingSaveFileInfo(UObject* WorldContext) {
    return false;
}

bool URsSaveGameBlueprintLibrary::IsCurrentSaveNewGamePlus(const UObject* WorldContext) {
    return false;
}

bool URsSaveGameBlueprintLibrary::IsClearingCurrentSavedProgress(UObject* WorldContext) {
    return false;
}

int32 URsSaveGameBlueprintLibrary::GetTimeInSecondsSinceLastSave(UObject* WorldContext) {
    return 0;
}

uint8 URsSaveGameBlueprintLibrary::GetSaveSlotCount(UObject* WorldContext) {
    return 0;
}

uint8 URsSaveGameBlueprintLibrary::GetSaveSlot(UObject* WorldContext) {
    return 0;
}

URsStreamingDefinition* URsSaveGameBlueprintLibrary::GetSaveGameStreamingInfo(UObject* WorldContext, uint8 SaveSlot, FName& OutStreamingPlayerStartName) {
    return NULL;
}

uint8 URsSaveGameBlueprintLibrary::GetMostRecentSaveSlot(UObject* WorldContext) {
    return 0;
}

URsGlobalSaveDataBase* URsSaveGameBlueprintLibrary::GetGlobalSaveData(UObject* WorldContext) {
    return NULL;
}

void URsSaveGameBlueprintLibrary::GetExistingSaveGames(UObject* WorldContext, TArray<FRsSaveGameInfo>& OutSaveGames, bool bAllowNonSlotSaves, bool bSortByTime) {
}

bool URsSaveGameBlueprintLibrary::GetCurrentWorldStateBackupSaveGameInfo(UObject* WorldContext, FRsSaveGameInfo& OutSaveGameInfo) {
    return false;
}

int32 URsSaveGameBlueprintLibrary::GetCurrentTotalTimePlayedForSaveGame(UObject* WorldContext) {
    return 0;
}

URsSaveGameMetaDataObject* URsSaveGameBlueprintLibrary::GetCurrentSaveGameMetaData(UObject* WorldContext) {
    return NULL;
}

bool URsSaveGameBlueprintLibrary::GetCurrentSaveGameInfo(UObject* WorldContext, FRsSaveGameInfo& OutSaveGameInfo) {
    return false;
}

bool URsSaveGameBlueprintLibrary::GetCurrentSavedCheckpointPlayerStartInfo(UObject* WorldContext, URsStreamingDefinition*& OutRootStreamingLevelDefinition, FName& OutPlayerStartName) {
    return false;
}

bool URsSaveGameBlueprintLibrary::GetCurrentBackupSaveGameInfo(UObject* WorldContext, FRsSaveGameInfo& OutSaveGameInfo) {
    return false;
}

bool URsSaveGameBlueprintLibrary::DoesSaveGameValidWorldStateBackupExistForSlot(UObject* WorldContext, uint8 SaveSlotIndex) {
    return false;
}

bool URsSaveGameBlueprintLibrary::DoesSaveGameExistForSlot(UObject* WorldContext, uint8 SaveSlotIndex, bool bIncludeBackup) {
    return false;
}

bool URsSaveGameBlueprintLibrary::DoesSaveGameExist(UObject* WorldContext) {
    return false;
}

bool URsSaveGameBlueprintLibrary::DoesSaveGameBackupExistForSlot(UObject* WorldContext, uint8 SaveSlotIndex) {
    return false;
}

void URsSaveGameBlueprintLibrary::ConfirmPendingSaves(UObject* WorldContext) {
}

void URsSaveGameBlueprintLibrary::ClearCurrentSavedProgress(UObject* WorldContext) {
}

URsSaveGameBlueprintLibrary::URsSaveGameBlueprintLibrary() {
    // Null default object.
}

