#include "SwDestructibleDoorActor.h"

#include "RsWorldMapDoorComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=RsGameTechRT -ObjectName=RsWorldMapDoorComponent -FallbackName=RsWorldMapDoorComponent

void ASwDestructibleDoorActor::OnDoorDestructed(AActor* DestructibleActor, int32 PhaseIndex, const bool DuringInitializationFromSaveGameState, const bool DuringInitializationFromWorldStateSystem) {
}

ASwDestructibleDoorActor::ASwDestructibleDoorActor() {
    this->WorldMapDoorComponent = CreateDefaultSubobject<URsWorldMapDoorComponent>(TEXT("RsWorldMapDoorComponent"));
}

