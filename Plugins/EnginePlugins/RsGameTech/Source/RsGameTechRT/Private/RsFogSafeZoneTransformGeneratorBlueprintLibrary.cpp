#include "RsFogSafeZoneTransformGeneratorBlueprintLibrary.h"

bool URsFogSafeZoneTransformGeneratorBlueprintLibrary::SphereOverlapsVolume(FVector SphereOrigin, float SphereRadius, FTransform FogLocation, FVector FogBoundsExtent) {
    return false;
}

bool URsFogSafeZoneTransformGeneratorBlueprintLibrary::PointOverlapsSphere(FVector PointLocation, FVector SphereOrigin, float SphereRadius) {
    return false;
}

bool URsFogSafeZoneTransformGeneratorBlueprintLibrary::LocationOverlapsFogBounds(FTransform FogLocation, FVector FogBoundsExtent, FVector PointLocation) {
    return false;
}

URsFogSafeZoneTransformGeneratorBlueprintLibrary::URsFogSafeZoneTransformGeneratorBlueprintLibrary() {
    // Null default object.
}

