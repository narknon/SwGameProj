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
    this->MaxCostPointsAvailable = 100;
    this->CurrentCostPointsAvailable = 0;
    this->bOverwritePrePopulatedEnemySet = false;
    this->bIsSpectating = false;
    this->bIsLeavingMeditationTraining = false;
    this->SpawnCameraClass = NULL;
    this->SpawnCursorClass = NULL;
    this->SpawnGridClass = NULL;
    this->SpawnArenaClass = NULL;
    this->LayoutSystemClass = NULL;
    this->SpectatorClass = NULL;
    this->EnemySetData = NULL;
    this->bUseLegacyInput = true;
    this->AddAiActionInputName = TEXT("UI_Accept");
    this->SecondaryConfirmActionInputName = TEXT("UI_SecondaryConfirm");
    this->TertiaryConfirmActionInputName = TEXT("UI_TertiaryConfirm");
    this->CancelActionInputName = TEXT("UI_Cancel");
    this->RemoveAiActionInputName = TEXT("UI_TertiaryConfirm");
    this->PlayActionInputName = TEXT("UI_SecondaryConfirm");
    this->PauseActionInputName = TEXT("Start");
    this->NextAiActionInputName = TEXT("UI_NextTab");
    this->PreviousAiActionInputName = TEXT("UI_PrevTab");
    this->DownActionInputName_DPad = TEXT("UI_Navigate_DPad_Down");
    this->DownActionInputName_LeftStick = TEXT("UI_Navigate_Stick_Down");
    this->UpActionInputName_DPad = TEXT("UI_Navigate_DPad_Up");
    this->UpActionInputName_LeftStick = TEXT("UI_Navigate_Stick_Up");
    this->LeftActionInputName_DPad = TEXT("UI_Navigate_DPad_Left");
    this->LeftActionInputName_LeftStick = TEXT("UI_Navigate_Stick_Left");
    this->RightActionInputName_DPad = TEXT("UI_Navigate_DPad_Right");
    this->RightActionInputName_LeftStick = TEXT("UI_Navigate_Stick_Right");
    this->UpActionInputName_RightStick = TEXT("UI_Navigate_Right_Stick_Up");
    this->DownActionInputName_RightStick = TEXT("UI_Navigate_Right_Stick_Down");
    this->PlayerCharacter = NULL;
    this->TimeBeforeEndCombat = 1.00f;
    this->SpawnCamera = NULL;
    this->SpawnCursor = NULL;
    this->SpawnGrid = NULL;
    this->AudioComponent = NULL;
    this->Audio_Sound_NoCostPoints = NULL;
    this->VoidTearExit = NULL;
    this->LayoutSystem = NULL;
    this->Spectator = NULL;
    this->HoldTimeClearAll = 1.00f;
    this->bIsPreparingBattle = false;
    this->bIsRestarting = false;
    this->bIsLoading = false;
    this->bIsButtonPressed = false;
    this->PlayerController = NULL;
    this->previousMode = ESwMeditationTrainingState::Mode_BattleSelect;
    this->CurrentMode = ESwMeditationTrainingState::Mode_BattleSelect;
}

