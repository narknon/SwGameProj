#include "RsImpactEffectCharacter.h"

FRsImpactEffectCharacter::FRsImpactEffectCharacter() {
    this->bUseDefaultSound = false;
    this->bUseDefaultVFX = false;
    this->ImpactSound[0] = NULL;
    this->ImpactSound[1] = NULL;
    this->ImpactSound[2] = NULL;
    this->ImpactSound[3] = NULL;
    this->ImpactSound[4] = NULL;
    this->ImpactSound[5] = NULL;
    this->bCreateAISound = false;
    this->ImpactSoundAI[0] = ERsAISoundType::Tiny;
    this->ImpactSoundAI[1] = ERsAISoundType::Tiny;
    this->ImpactSoundAI[2] = ERsAISoundType::Tiny;
    this->ImpactSoundAI[3] = ERsAISoundType::Tiny;
    this->ImpactSoundAI[4] = ERsAISoundType::Tiny;
    this->ImpactSoundAI[5] = ERsAISoundType::Tiny;
}

