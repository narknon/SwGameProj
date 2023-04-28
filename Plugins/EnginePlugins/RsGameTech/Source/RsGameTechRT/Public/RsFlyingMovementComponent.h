#pragma once
#include "CoreMinimal.h"
#include "Navigation/CrowdFollowingComponent.h"
#include "ERsTopologyMode.h"
#include "RsFlyingMovementComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class URsFlyingMovementComponent : public UCrowdFollowingComponent {
    GENERATED_BODY()
public:
    URsFlyingMovementComponent();
    UFUNCTION(BlueprintCallable)
    void SetEnableFlying(bool enable);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnTopologyChanged(ERsTopologyMode previousMode, ERsTopologyMode newMode, float Proximity);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFlyingEnabled() const;
    
};

