#include "SwMeditationTrainingWaveSystem.h"

bool ASwMeditationTrainingWaveSystem::IsWaveInPreparation() const {
    return false;
}

float ASwMeditationTrainingWaveSystem::GetWaveTimerRemaining() const {
    return 0.0f;
}

float ASwMeditationTrainingWaveSystem::GetWavePreparationTimerRemaining() const {
    return 0.0f;
}

FText ASwMeditationTrainingWaveSystem::GetWaveNumber() const {
    return FText::GetEmpty();
}

TArray<FString> ASwMeditationTrainingWaveSystem::GetWaveKeys() const {
    return TArray<FString>();
}

FText ASwMeditationTrainingWaveSystem::GetWaveEndCondition() const {
    return FText::GetEmpty();
}

ASwMeditationTrainingWaveSystem::ASwMeditationTrainingWaveSystem() {
    this->Activator = NULL;
}

