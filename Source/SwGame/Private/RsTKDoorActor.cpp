#include "RsTKDoorActor.h"

bool ARsTKDoorActor::SwapAndSpawnObjects() {
    return false;
}

bool ARsTKDoorActor::IsActivated() {
    return false;
}

TArray<AActor*> ARsTKDoorActor::GetSpawnedActors() {
    return TArray<AActor*>();
}

ARsTKDoorActor::ARsTKDoorActor() {
    this->SpawnedActorLifetime = 4.00f;
    this->bIsActivated = false;
}

