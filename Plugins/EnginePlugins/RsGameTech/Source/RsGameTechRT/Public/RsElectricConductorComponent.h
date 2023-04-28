#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "RsChemistryObjectHandle.h"
#include "RsOnElectrifyMulticastDelegateDelegate.h"
#include "RsOnUnelectrifyMulticastDelegateDelegate.h"
#include "RsElectricConductorComponent.generated.h"

class URsElectricitySourceComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class URsElectricConductorComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsOnElectrifyMulticastDelegate OnElectrify;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsOnUnelectrifyMulticastDelegate OnUnelectrify;
    
    URsElectricConductorComponent();
    UFUNCTION(BlueprintCallable)
    void UnelectrifyConductor();
    
    UFUNCTION(BlueprintCallable)
    void RemoveElectricitySourceObject(FRsChemistryObjectHandle ElectricitySourceObject);
    
    UFUNCTION(BlueprintCallable)
    void RemoveElectricitySource(URsElectricitySourceComponent* ElectricitySource);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsElectrified() const;
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleOnUnelectrify();
    
    UFUNCTION(BlueprintCallable)
    void HandleOnElectrify();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRsChemistryObjectHandle GetChemistryObject() const;
    
    UFUNCTION(BlueprintCallable)
    void ElectrifyConductor();
    
    UFUNCTION(BlueprintCallable)
    void AddElectricitySourceObject(FRsChemistryObjectHandle ElectricitySourceObject);
    
    UFUNCTION(BlueprintCallable)
    void AddElectricitySource(URsElectricitySourceComponent* ElectricitySource);
    
};

