#include "SwGameDestructibleActorSaveGameState.h"

FSwGameDestructibleActorSaveGameState::FSwGameDestructibleActorSaveGameState() {
    this->m_SavedEncountersInstance = 0;
    this->m_FirstPhaseIndex = 0;
    this->m_NumValidPhases = 0;
    this->m_ParallelStatesInitialized = 0;
    this->m_ActiveParallelStateType = ESwDestructibleActorParallelStateType::None;
    this->m_TotalDamagePoints = 0.00f;
    this->m_TotalNumberOfHits = 0;
}

