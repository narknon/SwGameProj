#include "RAPDialogueMetaData.h"

FRAPDialogueMetaData::FRAPDialogueMetaData() {
    this->bCritPath = false;
    this->Delay = 0.00f;
    this->bReplayable = false;
    this->OcclusionEnabled = false;
    this->bDisablePlayerMovementControl = false;
    this->bDisablePlayerCameraControl = false;
    this->bAutoPlay = false;
    this->bBackgroundConversation = false;
    this->bThrowaway = false;
    this->bReEnableOnAbandon = false;
    this->bReplayOncePerVisit = false;
    this->UseClosestSpeakers = false;
    this->VisitDialogueCounterName = ENarrativeDialogueMetadataVisitDialogueCounterName::Default;
    this->PriorityGroup = ENarrativeDialogueMetadataPriorityGroup::Default;
    this->NoGestures = false;
    this->DontUseConversationIdle = false;
    this->Exerted = ENarrativeDialogueMetadataExerted::NotExerted;
    this->EventType = ENarrativeDialogueMetadataType::Gameplay;
    this->SubtitleAttenuationRange = 0;
    this->SpeakersCount = 0;
    this->SpeakersHash = 0;
    this->RequiresMonkAvailable = false;
    this->SceneID = 0;
}

