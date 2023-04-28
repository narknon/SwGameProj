#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "ERsAIGameState.h"
#include "RsBTDecorator_CheckAIGameState.generated.h"

class URsAIGameStateManager;

UCLASS(Blueprintable)
class URsBTDecorator_CheckAIGameState : public UBTDecorator {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ERsAIGameState::Type> GameState;
    
public:
    URsBTDecorator_CheckAIGameState();
private:
    UFUNCTION(BlueprintCallable)
    void OnAIGameStateChanged(URsAIGameStateManager* GameStateManager, TEnumAsByte<ERsAIGameState::Type> PreviousGameState, TEnumAsByte<ERsAIGameState::Type> NewGameState);
    
};

