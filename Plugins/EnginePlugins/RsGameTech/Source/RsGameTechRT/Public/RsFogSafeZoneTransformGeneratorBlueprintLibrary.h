#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "RsFogSafeZoneTransformGeneratorBlueprintLibrary.generated.h"

UCLASS(Blueprintable)
class URsFogSafeZoneTransformGeneratorBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URsFogSafeZoneTransformGeneratorBlueprintLibrary();
    UFUNCTION(BlueprintCallable)
    static bool SphereOverlapsVolume(FVector SphereOrigin, float SphereRadius, FTransform FogLocation, FVector FogBoundsExtent);
    
    UFUNCTION(BlueprintCallable)
    static bool PointOverlapsSphere(FVector PointLocation, FVector SphereOrigin, float SphereRadius);
    
    UFUNCTION(BlueprintCallable)
    static bool LocationOverlapsFogBounds(FTransform FogLocation, FVector FogBoundsExtent, FVector PointLocation);
    
};

