#pragma once
#include "CoreMinimal.h"
#include "ERsAIAwarenessState.h"
#include "RsAISensor.h"
#include "RsAISensor_Team.generated.h"

class ARsAIController;
class URsAISystem;

UCLASS(Blueprintable)
class URsAISensor_Team : public URsAISensor {
    GENERATED_BODY()
public:
    URsAISensor_Team();
private:
    UFUNCTION(BlueprintCallable)
    void OnAwarenessStateChanged(ARsAIController* AIController, TEnumAsByte<ERsAIAwarenessState::Type> PreviousAwarenessState, TEnumAsByte<ERsAIAwarenessState::Type> NewAwarenessState);
    
    UFUNCTION(BlueprintCallable)
    void OnAIUninitialized(URsAISystem* AISystem, ARsAIController* AIController);
    
    UFUNCTION(BlueprintCallable)
    void OnAIInitialized(URsAISystem* AISystem, ARsAIController* AIController);
    
};

