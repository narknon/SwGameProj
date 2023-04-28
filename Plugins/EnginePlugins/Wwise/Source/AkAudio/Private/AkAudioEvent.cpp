#include "AkAudioEvent.h"

float UAkAudioEvent::GetMinimumDuration() const {
    return 0.0f;
}

float UAkAudioEvent::GetMaximumDuration() const {
    return 0.0f;
}

float UAkAudioEvent::GetMaxAttenuationRadius() const {
    return 0.0f;
}

bool UAkAudioEvent::GetIsInfinite() const {
    return false;
}

UAkAudioEvent::UAkAudioEvent() {
    // Null default object.
}

