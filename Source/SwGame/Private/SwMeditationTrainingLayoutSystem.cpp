#include "SwMeditationTrainingLayoutSystem.h"

void ASwMeditationTrainingLayoutSystem::SaveLayoutToSlot(int32 LayoutSlot, FSwMeditationTrainingLayout LayoutToSave) {
}

void ASwMeditationTrainingLayoutSystem::SaveLayoutSystemToDisk() {
}

void ASwMeditationTrainingLayoutSystem::RequireSavePrompt() {
}

void ASwMeditationTrainingLayoutSystem::LoadLayoutSystemFromDisk() {
}

void ASwMeditationTrainingLayoutSystem::LoadLayoutFromSlot(int32 LayoutSlot, FSwMeditationTrainingLayout& OutLayout) {
}

void ASwMeditationTrainingLayoutSystem::GetLayoutDebugString(FSwMeditationTrainingLayout Layout) {
}

ASwMeditationTrainingLayoutSystem::ASwMeditationTrainingLayoutSystem() {
    this->MaxLayoutSlots = 3;
    this->LastUsedLayoutSlot = 0;
    this->bHasUnsavedChanges = false;
}

