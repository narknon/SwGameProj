#include "RsWorldMapGatewayActor.h"

void ARsWorldMapGatewayActor::SetCanTurnOnFogOfWar(const bool CanTurnOnFogOfWar) {
}

void ARsWorldMapGatewayActor::ResolveGatewayState() {
}





bool ARsWorldMapGatewayActor::GetIsLocked() const {
    return false;
}

TArray<FRsMapSectionTag> ARsWorldMapGatewayActor::GetConnectedSections() const {
    return TArray<FRsMapSectionTag>();
}

bool ARsWorldMapGatewayActor::GetCanTurnOnFogOfWar() const {
    return false;
}

void ARsWorldMapGatewayActor::CacheGatewayState(ERsWorldMapGatewayState InState) {
}

ARsWorldMapGatewayActor::ARsWorldMapGatewayActor() {
    // Null default object.
}

