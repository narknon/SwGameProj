#pragma once
#include "CoreMinimal.h"
#include "RsJumpDefinition.h"
#include "RsBPJumpDefinition.generated.h"

class ARsHero;
class URsJumpComponent;

UCLASS(Blueprintable)
class URsBPJumpDefinition : public URsJumpDefinition {
    GENERATED_BODY()
public:
    URsBPJumpDefinition();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdateJump(ARsHero* Hero, URsJumpComponent* JumpComponent, float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnJumpAscend(ARsHero* Hero, URsJumpComponent* JumpComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnJumpApex(ARsHero* Hero, URsJumpComponent* JumpComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEndJump(ARsHero* Hero, URsJumpComponent* JumpComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBeginJump(ARsHero* Hero, URsJumpComponent* JumpComponent);
    
};

