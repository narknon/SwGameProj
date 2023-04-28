#include "RsWorldMapSectorActor.h"

FName ARsWorldMapSectorActor::GetSectorEnumName() const {
    return NAME_None;
}

FRsMapSectionTag ARsWorldMapSectorActor::GetMapSectionTag() const {
    return FRsMapSectionTag{};
}

ARsWorldMapSectorActor::ARsWorldMapSectorActor() {
    // Null default object.
}

