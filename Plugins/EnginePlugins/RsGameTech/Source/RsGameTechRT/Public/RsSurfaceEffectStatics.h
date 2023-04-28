#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Chaos/ChaosEngineInterface.h"
#include "FRsFootEffectSpeed.h"
#include "RsSurfaceEffectStatics.generated.h"

class UDataTable;
class UObject;
class UPrimitiveComponent;
class USceneComponent;
class UWorld;

UCLASS(Blueprintable)
class URsSurfaceEffectStatics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URsSurfaceEffectStatics();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UPrimitiveComponent* SpawnSurfaceEffectFromTable(const UObject* WorldContextObject, USceneComponent* AttachToComponent, FName AttachSocket, const UDataTable* EffectTable, TEnumAsByte<EPhysicalSurface> SurfaceType, const FVector Location, const FQuat Orientation, float DecalPitch, bool bMirror, bool bAttachParticle);
    
    UFUNCTION(BlueprintCallable)
    static void SpawnFootEffect(UWorld* World, const UDataTable* FootEffectTable, TEnumAsByte<EPhysicalSurface> SurfaceType, const FVector Location, const FQuat Orientation, FRsFootEffectSpeed Speed, bool bMirror);
    
    UFUNCTION(BlueprintCallable)
    static void AsyncLoadEffectAssets(UWorld* World, const UDataTable* EffectTable);
    
};

