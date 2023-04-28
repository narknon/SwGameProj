#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "RsChemistryObjectHandle.h"
#include "RsElectricNetworkComponent.generated.h"

class URsElectricConductorComponent;
class URsElectricNetworkComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class URsElectricNetworkComponent : public UActorComponent {
    GENERATED_BODY()
public:
    URsElectricNetworkComponent();
    UFUNCTION(BlueprintCallable)
    void UngroupFromNetworkObject(FRsChemistryObjectHandle OtherNetworkObject);
    
    UFUNCTION(BlueprintCallable)
    void UngroupFromNetwork(URsElectricNetworkComponent* ElectricNetwork);
    
    UFUNCTION(BlueprintCallable)
    void RemoveConductorObject(FRsChemistryObjectHandle ConductorObject);
    
    UFUNCTION(BlueprintCallable)
    void RemoveConductor(URsElectricConductorComponent* ElectricConductor);
    
    UFUNCTION(BlueprintCallable)
    void GroupWithNetworkObject(FRsChemistryObjectHandle OtherNetworkObject);
    
    UFUNCTION(BlueprintCallable)
    void GroupWithNetwork(URsElectricNetworkComponent* ElectricNetwork);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRsChemistryObjectHandle GetChemistryObject() const;
    
    UFUNCTION(BlueprintCallable)
    void AddConductorObject(FRsChemistryObjectHandle ConductorObject);
    
    UFUNCTION(BlueprintCallable)
    void AddConductor(URsElectricConductorComponent* ElectricConductor);
    
};

