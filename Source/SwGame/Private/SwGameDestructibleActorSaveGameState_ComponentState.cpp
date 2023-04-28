#include "SwGameDestructibleActorSaveGameState_ComponentState.h"

FSwGameDestructibleActorSaveGameState_ComponentState::FSwGameDestructibleActorSaveGameState_ComponentState() {
    this->m_Active = false;
    this->m_HiddenInGame = false;
    this->m_CollisionSettings = ECollisionEnabled::NoCollision;
}

