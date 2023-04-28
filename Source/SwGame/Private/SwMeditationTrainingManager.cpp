#include "SwMeditationTrainingManager.h"

void ASwMeditationTrainingManager::UnbindInputactionBeginTraining() {
}

FEventReply ASwMeditationTrainingManager::TryProcessMouseClick(const FPointerEvent& MouseEvent) {
    return FEventReply{};
}

void ASwMeditationTrainingManager::ToggleSpectatorController(bool bEnableSpectator) {
}

void ASwMeditationTrainingManager::SwitchMode(ESwMeditationTrainingState newMode) {
}





void ASwMeditationTrainingManager::SpectatorShowAllHiddenComponents() {
}


void ASwMeditationTrainingManager::SpectatorHideComponents(AActor* Actor) {
}

void ASwMeditationTrainingManager::SetVisibilitySpawnedEnemies(bool bHide) {
}

void ASwMeditationTrainingManager::SetupEnemySetData() {
}

void ASwMeditationTrainingManager::SetSpectatorModeEnabled(bool bEnabled) {
}

void ASwMeditationTrainingManager::SetSpawnGridSize(FIntPoint NewGridSize) {
}

void ASwMeditationTrainingManager::SetEnemiesIgnorePlayer(bool bShouldIgnore) {
}

void ASwMeditationTrainingManager::ReviveHero(bool bDespawnAi) {
}

void ASwMeditationTrainingManager::RevertActiveHeroModifiers() {
}

void ASwMeditationTrainingManager::ResetLayout() {
}

void ASwMeditationTrainingManager::ResetGrid(bool bResetGridSize) {
}

void ASwMeditationTrainingManager::PlaySoundEffect(UAkAudioEvent* InSoundEffect) {
}

void ASwMeditationTrainingManager::PlayCombat() {
}












void ASwMeditationTrainingManager::OnEnemyDeath(AActor* DeadActor) {
}

void ASwMeditationTrainingManager::OnCursorMovement(const FVector& NewLocation) {
}




void ASwMeditationTrainingManager::OnAllAiDead() {
}

void ASwMeditationTrainingManager::OnAiSpawnedByATST(ARsAICharacter* AICharacter) {
}


bool ASwMeditationTrainingManager::IsSpectatingModifierEnabled() const {
    return false;
}

bool ASwMeditationTrainingManager::IsSpawnQueueEmpty() const {
    return false;
}

bool ASwMeditationTrainingManager::IsMouseInputActive() const {
    return false;
}

bool ASwMeditationTrainingManager::IsButtonPressed() const {
    return false;
}

void ASwMeditationTrainingManager::Initialize(AActor* InVoidTearExit, ASwHero* InPlayerCharacter, ARsPlayerController* InPlayerController) {
}

void ASwMeditationTrainingManager::IncrementHeroModifier(ESwMeditationTrainingHeroModifier InModifierKey) {
}


int32 ASwMeditationTrainingManager::GetSelectedEnemyCost(FSwMeditationTrainingEnemyData InEnemy) {
    return 0;
}

float ASwMeditationTrainingManager::GetPercentageButtonHeld() const {
    return 0.0f;
}

int32 ASwMeditationTrainingManager::GetEnemyCount() const {
    return 0;
}

int32 ASwMeditationTrainingManager::GetDeathCount() const {
    return 0;
}



void ASwMeditationTrainingManager::DisableAllHeroModifiers() {
}

void ASwMeditationTrainingManager::Deactivate() {
}

void ASwMeditationTrainingManager::CaptureCurrentModifiers(FSwMeditationTrainingLayout& Layout) {
}

void ASwMeditationTrainingManager::CaptureCurrentLayout(FSwMeditationTrainingLayout& Layout) {
}

void ASwMeditationTrainingManager::BindInputactionBeginTraining() {
}

void ASwMeditationTrainingManager::ApplySelectedHeroModifiers() {
}

void ASwMeditationTrainingManager::ApplyLayout(FSwMeditationTrainingLayout Layout) {
}

void ASwMeditationTrainingManager::AddOrRemoveAiFromCurrentCursorPosition() {
}

void ASwMeditationTrainingManager::AddEnemy(const FSwMeditationTrainingEnemyData& AiToSpawn) {
}

void ASwMeditationTrainingManager::ActivateAllEnemies(bool bActivate) {
}

ASwMeditationTrainingManager::ASwMeditationTrainingManager() {
    // Null default object.
}

