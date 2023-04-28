#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "SwSectorMapComponent.h"
#include "SwFastTravelSectorMapComponent.generated.h"

class ARsWorldMapSavePointActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USwFastTravelSectorMapComponent : public USwSectorMapComponent {
    GENERATED_BODY()
public:
    USwFastTravelSectorMapComponent();
    UFUNCTION(BlueprintCallable)
    void SnapToSavePoint(FGameplayTag InSavePointTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<ARsWorldMapSavePointActor*> GetSavePoints();
    
};

