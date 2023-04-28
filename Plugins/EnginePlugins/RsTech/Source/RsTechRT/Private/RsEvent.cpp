#include "RsEvent.h"

bool URsEvent::UnbindEventByWorldEventID(FRsUID& worldEventID) {
    return false;
}

bool URsEvent::BindEventToTopologyChange(FRsUID& worldEventID, const ArsActor* Target, const FRsTopology& topologyPatch, FRsEventDynamicDelegateTopologyChange eventDelegate, const bool continuous) {
    return false;
}

bool URsEvent::BindEventToDirectionChange(FRsUID& worldEventID, const AActor* Target, FRsEventDynamicDelegate eventDelegate, const FVector directionReference, const bool continuous) {
    return false;
}

URsEvent::URsEvent() {
    // Null default object.
}

