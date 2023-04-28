#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "RsFoliageAudioStatics.generated.h"

class UObject;

UCLASS(Blueprintable)
class URsFoliageAudioStatics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URsFoliageAudioStatics();
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static void GetFoliageTypesAtLocation(UObject* WorldContextObject, FVector Location, float Radius, TMap<FName, int32>& FoliageSwitchCount);
    
};

