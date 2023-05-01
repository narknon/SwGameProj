#include "SwMeditationTrainingArena.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent

void ASwMeditationTrainingArena::SetArenaSizeImmediate(const FVector& ArenaCentre, const FVector2D& ArenaDimensions) {
}


ASwMeditationTrainingArena::ASwMeditationTrainingArena() {
    this->ArenaScaleMultiplier = 1.00f;
    this->ArenaPadding = 5000.00f;
    this->ArenaRoot = CreateDefaultSubobject<USceneComponent>(TEXT("ArenaRoot"));
    this->BlockingWallRight = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BlockingWallRight"));
    this->BlockingWallLeft = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BlockingWallLeft"));
    this->BlockingWallForward = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BlockingWallForward"));
    this->BlockingWallBackward = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BlockingWallBackward"));
    this->BlockingCeiling = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BlockingCeiling"));
    this->ArenaLightsClass = NULL;
    this->ArenaLights = NULL;
}

