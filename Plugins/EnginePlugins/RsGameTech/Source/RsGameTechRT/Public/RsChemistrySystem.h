#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Subsystems/WorldSubsystem.h"
#include "ERsChemistryProperty.h"
#include "RsChemistryElectricityConductibleState.h"
#include "RsChemistryObjectHandle.h"
#include "RsOnElectrifyDelegateDelegate.h"
#include "RsOnFireExtinguishedDelegateDelegate.h"
#include "RsOnFireIgnitedDelegateDelegate.h"
#include "RsOnUnelectrifyDelegateDelegate.h"
#include "RsChemistrySystem.generated.h"

class UObject;
class URsChemistryFlammableSettings;
class USceneComponent;

UCLASS(Blueprintable)
class URsChemistrySystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URsChemistryFlammableSettings* DefaultFlammableSettings;
    
public:
    URsChemistrySystem();
    UFUNCTION(BlueprintCallable)
    void UpdateFlammableSettings(const FRsChemistryObjectHandle& FlammableObjectHandle, const URsChemistryFlammableSettings* FlammableSettings);
    
    UFUNCTION(BlueprintCallable)
    void UnlinkElectricitySourceFromConductor(const FRsChemistryObjectHandle& ElectricitySourceObjectHandle, const FRsChemistryObjectHandle& ConductorObjectHandle);
    
    UFUNCTION(BlueprintCallable)
    void UngroupElectricityNetworks(const FRsChemistryObjectHandle& NetworkObjectHandleA, const FRsChemistryObjectHandle& NetworkObjectHandleB);
    
    UFUNCTION(BlueprintCallable)
    void UnelectrifyConductor(const FRsChemistryObjectHandle& ObjectHandle);
    
    UFUNCTION(BlueprintCallable)
    void UnbindOnUnelectrify(const FRsChemistryObjectHandle& ObjectHandle, const FRsOnUnelectrifyDelegate& OnUnelectrifyDelegate);
    
    UFUNCTION(BlueprintCallable)
    void UnbindOnFireIgnited(const FRsChemistryObjectHandle& ObjectHandle, const FRsOnFireIgnitedDelegate& OnFireIgnitedDelegate);
    
    UFUNCTION(BlueprintCallable)
    void UnbindOnFireExtinguished(const FRsChemistryObjectHandle& ObjectHandle, const FRsOnFireExtinguishedDelegate& OnFireExtinguishedDelegate);
    
    UFUNCTION(BlueprintCallable)
    void UnbindOnElectrify(const FRsChemistryObjectHandle& ObjectHandle, const FRsOnElectrifyDelegate& OnElectrifyDelegate);
    
    UFUNCTION(BlueprintCallable)
    void SetFlammableWorldTransform(const FRsChemistryObjectHandle& FlammableObjectHandle, FTransform InWorldTransform);
    
    UFUNCTION(BlueprintCallable)
    void SetFlammableSceneParent(const FRsChemistryObjectHandle& FlammableObjectHandle, USceneComponent* InSceneParent, bool bInheritScale);
    
    UFUNCTION(BlueprintCallable)
    void ResetFlammableIgnitionState(const FRsChemistryObjectHandle& FlammableObjectHandle);
    
    UFUNCTION(BlueprintCallable)
    void RemoveConductorFromNetwork(const FRsChemistryObjectHandle& ConductorObjectHandle, const FRsChemistryObjectHandle& NetworkObjectHandle);
    
    UFUNCTION(BlueprintCallable)
    void RemoveChemistryProperty(const FRsChemistryObjectHandle& ObjectHandle, const TEnumAsByte<ERsChemistryProperty::Type> PropertyType);
    
    UFUNCTION(BlueprintCallable)
    void LinkElectricitySourceToConductor(const FRsChemistryObjectHandle& ElectricitySourceObjectHandle, const FRsChemistryObjectHandle& ConductorObjectHandle);
    
    UFUNCTION(BlueprintCallable)
    void IgniteNearbyFlammables(FVector Location, float IgnitionRadius, bool bDrawDebug);
    
    UFUNCTION(BlueprintCallable)
    void IgniteFlammable(const FRsChemistryObjectHandle& FlammableObjectHandle);
    
    UFUNCTION(BlueprintCallable)
    void GroupElectricityNetworks(const FRsChemistryObjectHandle& NetworkObjectHandleA, const FRsChemistryObjectHandle& NetworkObjectHandleB);
    
    UFUNCTION(BlueprintCallable)
    FRsChemistryElectricityConductibleState GetConductibleState(const FRsChemistryObjectHandle& ObjectHandle);
    
    UFUNCTION(BlueprintCallable)
    void ExtinguishFlammable(const FRsChemistryObjectHandle& FlammableObjectHandle);
    
    UFUNCTION(BlueprintCallable)
    void ElectrifyConductor(const FRsChemistryObjectHandle& ObjectHandle);
    
    UFUNCTION(BlueprintCallable)
    void DestroyChemistryObject(const FRsChemistryObjectHandle& ObjectHandle);
    
    UFUNCTION(BlueprintCallable)
    void DeactivateElectricitySource(const FRsChemistryObjectHandle& ObjectHandle);
    
    UFUNCTION(BlueprintCallable)
    FRsChemistryObjectHandle CreateChemistryObject(UObject* Owner, const int32 InitialPropertyMask);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckValid(const FRsChemistryObjectHandle& ObjectHandle) const;
    
    UFUNCTION(BlueprintCallable)
    void BindOnUnelectrify(const FRsChemistryObjectHandle& ObjectHandle, const FRsOnUnelectrifyDelegate& OnUnelectrifyDelegate);
    
    UFUNCTION(BlueprintCallable)
    void BindOnFireIgnited(const FRsChemistryObjectHandle& ObjectHandle, const FRsOnFireIgnitedDelegate& OnFireIgnitedDelegate);
    
    UFUNCTION(BlueprintCallable)
    void BindOnFireExtinguished(const FRsChemistryObjectHandle& ObjectHandle, const FRsOnFireExtinguishedDelegate& OnFireExtinguishedDelegate);
    
    UFUNCTION(BlueprintCallable)
    void BindOnElectrify(const FRsChemistryObjectHandle& ObjectHandle, const FRsOnElectrifyDelegate& OnElectrifyDelegate);
    
    UFUNCTION(BlueprintCallable)
    void AddConductorToNetwork(const FRsChemistryObjectHandle& ConductorObjectHandle, const FRsChemistryObjectHandle& NetworkObjectHandle);
    
    UFUNCTION(BlueprintCallable)
    void AddChemistryProperty(const FRsChemistryObjectHandle& ObjectHandle, const TEnumAsByte<ERsChemistryProperty::Type> PropertyType);
    
    UFUNCTION(BlueprintCallable)
    void ActivateElectricitySource(const FRsChemistryObjectHandle& ObjectHandle);
    
};

