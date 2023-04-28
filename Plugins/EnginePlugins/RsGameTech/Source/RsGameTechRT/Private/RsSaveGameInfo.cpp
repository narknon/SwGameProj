#include "RsSaveGameInfo.h"

FRsSaveGameInfo::FRsSaveGameInfo() {
    this->SaveSlot = 0;
    this->Changelist = 0;
    this->bCorrupt = false;
    this->MetaDataObject = NULL;
}

