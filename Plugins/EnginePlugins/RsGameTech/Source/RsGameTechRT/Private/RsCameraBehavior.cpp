#include "RsCameraBehavior.h"

bool URsCameraBehavior::IsFirstUpdate() const {
    return false;
}

float URsCameraBehavior::GetRotationSpeedYaw(const FRsCameraInputs& Inputs) {
    return 0.0f;
}

float URsCameraBehavior::GetRotationSpeedPitch(const FRsCameraInputs& Inputs) {
    return 0.0f;
}

void URsCameraBehavior::GetAnchorTargetsTrimmed(const UObject* WorldContextObject, FVector HeroLocation, float MaxEnemyDistance, float MaxLargeEnemyDistance, TArray<AActor*>& OutHostileTargetableActors) {
}

void URsCameraBehavior::CalculateWeightedAverageEnemyLocation(FVector HeroLocation, float InWeightTotal, float MaxEnemyDistance, UCurveFloat* EnemyWeightingCurve, float MaxLargeEnemyDistance, UCurveFloat* LargeEnemyWeightingCurve, const TArray<AActor*>& HostileTargetableActors, const TArray<bool>& IsLargeEnemies, FVector& OutWeightedAverageEnemyLocation, float& OutWeightTotal) {
}

void URsCameraBehavior::BlueprintUpdateInputs_Implementation(const FRsCameraInputs& PreviousInputs, FRsCameraInputs& Inputs) {
}

void URsCameraBehavior::BlueprintUpdate_Implementation(const FRsCameraInputs& Inputs, const FRsCameraOutputs& PreviousOutputs, FRsCameraOutputs& Outputs) {
}

void URsCameraBehavior::BlueprintEnd_Implementation(const FRsCameraInputs& Inputs, const FRsCameraOutputs& PreviousOutputs, FRsCameraOutputs& Outputs) {
}

void URsCameraBehavior::BlueprintBegin_Implementation(const FRsCameraInputs& Inputs, const FRsCameraOutputs& PreviousOutputs, FRsCameraOutputs& Outputs) {
}

URsCameraBehavior::URsCameraBehavior() {
    // Null default object.
}

