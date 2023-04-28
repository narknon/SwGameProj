#include "RsNarrativeConversationIdleRequest.h"

FRsNarrativeConversationIdleRequest::FRsNarrativeConversationIdleRequest() {
    this->StartDelay = 0.00f;
    this->BlendTime = 0.00f;
    this->RetainIdleAfterConversation = false;
    this->OnlyActionRequestWhenOutOfConversationAndAtOriginalYaw = false;
    this->NewConversationalIdle = false;
}

