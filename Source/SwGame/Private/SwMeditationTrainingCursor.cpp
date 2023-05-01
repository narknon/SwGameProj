#include "SwMeditationTrainingCursor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent

void ASwMeditationTrainingCursor::SetMagnetTarget(const FVector& Location) {
}

void ASwMeditationTrainingCursor::SetForceMagnetEnabled(bool bInForceEnable) {
}

ASwMeditationTrainingCursor::ASwMeditationTrainingCursor() {
    this->MovementXInputName = TEXT("MoveLeftAnalogX");
    this->MovementYInputName = TEXT("MoveLeftAnalogY");
    this->MovementInputDeadZone = 0.15f;
    this->MaxSpeed = 15.00f;
    this->Acceleration = 20.00f;
    this->EnemyDetectionRadius = 20.00f;
    this->OuterGridMovementBuffer = 25.00f;
    this->MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent"));
    this->Camera = NULL;
    this->MeditationGrid = NULL;
    this->PlayerController = NULL;
    this->bEnableMagnet = true;
    this->MagnetForce = 3.00f;
}

