#include "NarrativeEventResult.h"

FNarrativeEventResult::FNarrativeEventResult() {
    this->Result = ENarrativeEventResultType::Unset;
    this->PlayingConversation = NULL;
    this->Success = false;
    this->QueuedItemID = 0;
}

