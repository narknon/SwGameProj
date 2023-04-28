#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/SceneComponent.h"
#include "RsChemistryObjectHandle.h"
#include "RsOnFireExtinguishedMulticastDelegateDelegate.h"
#include "RsOnFireIgnitedMulticastDelegateDelegate.h"
#include "RsFlammableComponent.generated.h"

class URsChemistryFlammableSettings;

UCLASS(Blueprintable, NonTransient, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class URsFlammableComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URsChemistryFlammableSettings* FlammableSettings;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsOnFireIgnitedMulticastDelegate OnFireIgnited;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsOnFireExtinguishedMulticastDelegate OnFireExtinguished;
    
    URsFlammableComponent();
    UFUNCTION(BlueprintCallable)
    void SetFlammableSettings(const URsChemistryFlammableSettings* InFlammableSettings);
    
    UFUNCTION(BlueprintCallable)
    void ResetIgnitionState();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsIgnited() const;
    
    UFUNCTION(BlueprintCallable)
    void Ignite();
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleOnFireIgnited(FRsChemistryObjectHandle Flammable, FVector IgnitionPoint);
    
    UFUNCTION(BlueprintCallable)
    void HandleOnFireExtinguished(FRsChemistryObjectHandle Flammable);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRsChemistryObjectHandle GetChemistryObject() const;
    
    UFUNCTION(BlueprintCallable)
    void Extinguish();
    
};

