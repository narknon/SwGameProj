#include "RsWorldStateInstance.h"

FRsWorldStateInstance::FRsWorldStateInstance() {
    this->bIgnoreWorldStateWarningsForSession = false;
    this->bHasAcceptedWorldStateErrors = false;
    this->bHasAcceptedWorldStateErrorsSinceLastSave = false;
}

