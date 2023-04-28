#include "RsAISimpleSpawnerInstance.h"

FRsAISimpleSpawnerInstance::FRsAISimpleSpawnerInstance() {
    this->AICharacterDefinition = NULL;
    this->NGPAICharacterDefinition = NULL;
    this->bSpawnOnStartPlay = false;
    this->bCanNeverAwake = false;
    this->OverrideVisionDefinition = NULL;
}

