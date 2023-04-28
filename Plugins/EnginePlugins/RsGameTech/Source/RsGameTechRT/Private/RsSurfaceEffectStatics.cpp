#include "RsSurfaceEffectStatics.h"

UPrimitiveComponent* URsSurfaceEffectStatics::SpawnSurfaceEffectFromTable(const UObject* WorldContextObject, USceneComponent* AttachToComponent, FName AttachSocket, const UDataTable* EffectTable, TEnumAsByte<EPhysicalSurface> SurfaceType, const FVector Location, const FQuat Orientation, float DecalPitch, bool bMirror, bool bAttachParticle) {
    return NULL;
}

void URsSurfaceEffectStatics::SpawnFootEffect(UWorld* World, const UDataTable* FootEffectTable, TEnumAsByte<EPhysicalSurface> SurfaceType, const FVector Location, const FQuat Orientation, FRsFootEffectSpeed Speed, bool bMirror) {
}

void URsSurfaceEffectStatics::AsyncLoadEffectAssets(UWorld* World, const UDataTable* EffectTable) {
}

URsSurfaceEffectStatics::URsSurfaceEffectStatics() {
    // Null default object.
}

