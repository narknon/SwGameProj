#include "SwMeditationTrainingArenaLights.h"

void ASwMeditationTrainingArenaLights::SetupLights(FVector ArenaCentre, FVector2D ArenaDimensions) {
}

void ASwMeditationTrainingArenaLights::ClearAllLights() {
}

ASwMeditationTrainingArenaLights::ASwMeditationTrainingArenaLights() {
    this->LightClass = NULL;
    this->MinDistanceBetweenLights = 1000.00f;
    this->Padding = 500.00f;
    this->LightHeight = 2000.00f;
}

