#include "SwMeditationTrainingGrid.h"

void ASwMeditationTrainingGrid::MoveSelection(EUINavigation Direction) {
}

FName ASwMeditationTrainingGrid::GetLabelForGridSize(FIntPoint GridSize) {
    return NAME_None;
}

void ASwMeditationTrainingGrid::Display(bool bEnable) {
}

void ASwMeditationTrainingGrid::ClearCells() {
}

ASwMeditationTrainingGrid::ASwMeditationTrainingGrid() {
    this->GridCellClass = NULL;
    this->bUseLegacyGridNavigation = true;
    this->MeditationCamera = NULL;
    this->MeditationCursor = NULL;
}

