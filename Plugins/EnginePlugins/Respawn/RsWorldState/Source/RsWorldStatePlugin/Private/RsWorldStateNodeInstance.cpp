#include "RsWorldStateNodeInstance.h"

FRsWorldStateNodeInstance::FRsWorldStateNodeInstance() {
    this->bIsCompletedPersistent = false;
    this->bIsCompletedUnsaved = false;
    this->NodeTypeSpecificData = NULL;
}

