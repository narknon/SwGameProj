#include "SwHeroDefenseComponent.h"

URsPlayerAnimInstance* USwHeroDefenseComponent::GetPlayerAnimInstance() const {
    return NULL;
}

bool USwHeroDefenseComponent::DebugGetHeroComponentInfo(FString& ComponentInfoString) const {
    return false;
}

USwHeroDefenseComponent::USwHeroDefenseComponent() {
    this->Hero = NULL;
}

