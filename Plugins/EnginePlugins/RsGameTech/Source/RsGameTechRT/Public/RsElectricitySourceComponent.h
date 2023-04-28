#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "RsChemistryObjectHandle.h"
#include "RsElectricitySourceComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class URsElectricitySourceComponent : public UActorComponent {
    GENERATED_BODY()
public:
    URsElectricitySourceComponent();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRsChemistryObjectHandle GetChemistryObject() const;
    
    UFUNCTION(BlueprintCallable)
    void DeactivateElectricSource();
    
    UFUNCTION(BlueprintCallable)
    void ActivateElectricSource();
    
};

