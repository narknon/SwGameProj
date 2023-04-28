#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "ERsAIAwarenessState.h"
#include "Templates/SubclassOf.h"
#include "SwBTService_TeamConversation.generated.h"

class AActor;
class ARsAIController;
class ARsConversation;
class URsAIBehaviorStateMachine;

UCLASS(Blueprintable)
class SWGAME_API USwBTService_TeamConversation : public UBTService {
    GENERATED_BODY()
public:
    USwBTService_TeamConversation();
private:
    UFUNCTION(BlueprintCallable)
    void OnConversationFinished(ARsConversation* Conversation);
    
    UFUNCTION(BlueprintCallable)
    void OnBehaviorStateMachineChanged(ARsAIController* RsAIController, AActor* Actor, TSubclassOf<URsAIBehaviorStateMachine> PreviousBehaviorStateMachineAsset, TSubclassOf<URsAIBehaviorStateMachine> NewBehaviorStateMachineAsset);
    
    UFUNCTION(BlueprintCallable)
    void OnAwarenessStateChanged(ARsAIController* AIController, TEnumAsByte<ERsAIAwarenessState::Type> PreviousAwarenessState, TEnumAsByte<ERsAIAwarenessState::Type> NewAwarenessState);
    
};

