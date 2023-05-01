#include "SwSplineSpaceshipCamera.h"

#include "GameFramework/SpringArmComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SpringArmComponent -FallbackName=SpringArmComponent

ASwSplineSpaceshipCamera::ASwSplineSpaceshipCamera() {
    this->LocationInterpSpeed = 4.00f;
    this->RotationInterpSpeed = 20.00f;
    this->LookAtRotationPercentage = 25.00f;
    this->RollPercentage = 10.00f;
    this->MaxCameraTargetOffset = 17000.00f;
    this->CameraSpringArmComponent = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraSpringArm"));
    this->SplineSpaceshipComponent = NULL;
}

