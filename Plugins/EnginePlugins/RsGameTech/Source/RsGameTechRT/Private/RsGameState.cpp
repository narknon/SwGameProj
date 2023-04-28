#include "RsGameState.h"

void ARsGameState::StopTutorial() {
}

void ARsGameState::StopMapAutoPlay() {
}

void ARsGameState::StartTutorial() {
}

void ARsGameState::StartMapAutoPlay() {
}

void ARsGameState::SetSaveSlot(uint8 SaveSlot) {
}

void ARsGameState::SetPlayTimeCountingMode(UObject* Requester, ERsTotalPlayTimeMode NewPlayTimeMode) {
}

void ARsGameState::SetLevelTag(FGameplayTag Tag, bool bNewValue, bool bSaveImmediate, bool bDebug) {
}

void ARsGameState::SetIsInHoloTable(bool bNewValue) {
}

void ARsGameState::SetDifficulty(ERsDifficulty NewDifficulty) {
}

void ARsGameState::SetCurrentActivity(const FString& NewActivity) {
}

void ARsGameState::RemoveLevelTag(FGameplayTag Tag, bool bSaveImmediate, bool bDebug) {
}


void ARsGameState::NativeOnHeroDied(AActor* DeathActor) {
}

void ARsGameState::MarkCurrentActivityComplete() {
}

void ARsGameState::LogPlayedDialogue(int32 SceneID) {
}

bool ARsGameState::IsTutorialInProgress() const {
    return false;
}

bool ARsGameState::IsMapAutoPlayInProgress() const {
    return false;
}

bool ARsGameState::IsInMeditationTraining() const {
    return false;
}

bool ARsGameState::IsInHoloTable() const {
    return false;
}

void ARsGameState::IncrementEncountersInstance() {
}

bool ARsGameState::HasLevelTag(const FGameplayTag Tag, bool bExactMatch) const {
    return false;
}

bool ARsGameState::HasDialogueBeenPlayed(int32 SceneID) {
    return false;
}

bool ARsGameState::HasAnyLevelTag(FGameplayTagContainer TagsToCheck, bool bExactMatch) const {
    return false;
}

bool ARsGameState::HasAllLevelTags(FGameplayTagContainer TagsToCheck, bool bExactMatch) const {
    return false;
}

int32 ARsGameState::GetTotalPlayTimeWithPausesInSeconds() const {
    return 0;
}

int32 ARsGameState::GetTotalPlayTimeInSeconds() const {
    return 0;
}

uint8 ARsGameState::GetSaveSlotCount() const {
    return 0;
}

uint8 ARsGameState::GetSaveSlot() const {
    return 0;
}

ARsGameState* ARsGameState::GetRsGameState(const UObject* WorldContextObject) {
    return NULL;
}

int32 ARsGameState::GetEncountersInstance() const {
    return 0;
}

ERsDifficulty ARsGameState::GetDifficulty() const {
    return ERsDifficulty::Difficulty_Easy;
}

FGameplayTagContainer ARsGameState::GetCurrentLevelTags() {
    return FGameplayTagContainer{};
}

FString ARsGameState::DebugGetCurrentLevelTags() const {
    return TEXT("");
}

void ARsGameState::DebugClearPlayedDialogue() {
}

void ARsGameState::ClearCurrentActivity() {
}

void ARsGameState::ClearAllLevelTags(bool bSaveImmediate, bool bDebug) {
}



void ARsGameState::AddLevelTag(FGameplayTag Tag, bool bSaveImmediate, bool bDebug) {
}

ARsGameState::ARsGameState() {
    // Null default object.
}

