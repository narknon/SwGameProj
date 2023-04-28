#pragma once
#include "CoreMinimal.h"
#include "ERsCharacterNavigationComponentType.h"
#include "ERsNavState.h"
#include "RsHeroComponent.h"
#include "RsCharacterNavigationManagementComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class URsCharacterNavigationManagementComponent : public URsHeroComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ConstraintBoneName;
    
    URsCharacterNavigationManagementComponent();
    UFUNCTION(BlueprintCallable)
    void UpdateTransitionProgression(float Progression);
    
    UFUNCTION(BlueprintCallable)
    bool TrySetNavState(ERsNavState navState, bool forceNavStateChange, FName navStateChangeTag);
    
    UFUNCTION(BlueprintCallable)
    void TriggerTransition(TEnumAsByte<ERsCharacterNavigationComponentType::Type> targetNavComponent, bool animationDriven);
    
    UFUNCTION(BlueprintCallable)
    bool ResetToBestNavState(bool forceNavStateChange, FName navStateChangeTag);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnHeroStateChanged(ERsNavState NewState, ERsNavState PrevState);
    
public:
    UFUNCTION(BlueprintCallable)
    void AbortTransition(bool resetNavState);
    
};

