#include "NarrativeEventOptions.h"

FNarrativeEventOptions::FNarrativeEventOptions() {
    this->ForceAlwaysPlay = false;
    this->PlayInBackground = false;
    this->QueueIfFails = false;
    this->DialogueRuleMustMatchAllTemporaryTrueTags = false;
    this->Ignore = false;
    this->AbortOnCombat = false;
    this->BypassSystemicChancesAndCooldowns = false;
    this->UseClosestSpeakers = false;
}

