#include "SwHologramBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneCaptureComponent2D -FallbackName=SceneCaptureComponent2D
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent
#include "SwHologramCameraFacerComponent.h"
#include "Components/SceneCaptureComponent2D.h"

void ASwHologramBase::SetCameraFOV(float FOV) {
}


bool ASwHologramBase::HologramActive() const {
    return false;
}


UMaterialInstanceDynamic* ASwHologramBase::GetHologramMaterial() const {
    return NULL;
}

float ASwHologramBase::GetActiveRampValue() const {
    return 0.0f;
}

void ASwHologramBase::DeactivateHologram() {
}

void ASwHologramBase::ActivateHologram() {
}

ASwHologramBase::ASwHologramBase() {
    this->bStartActive = false;
    this->EmissiveIntensity = 1.00f;
    this->DisplayRampTime = 2.00f;
    this->CardVerticalOffset = 160.00f;
    this->CardScale = 1.00f;
    this->CardTranslucencySortPriority = 0;
    this->CameraDistance = 350.00f;
    this->CameraFOV = 90.00f;
    this->RenderTargetSize = 256;
    this->HologramSceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("HologramSceneRoot"));
    this->CameraFacer = CreateDefaultSubobject<USwHologramCameraFacerComponent>(TEXT("CameraFacer"));
    this->HologramDisplayCard = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("HologramDisplayCard"));
    this->CameraArm = CreateDefaultSubobject<USwHologramCameraFacerComponent>(TEXT("CameraArm"));
    this->HologramCaptureCamera = CreateDefaultSubobject<USceneCaptureComponent2D>(TEXT("HologramCaptureCamera"));
    this->RenderTarget = NULL;
    this->HologramMaterial = NULL;
}

