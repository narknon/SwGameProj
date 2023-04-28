#pragma once
#include "CoreMinimal.h"
#include "RsReactionState.h"
#include "SwReactionState.generated.h"

class ARsCharacter;

UCLASS(Blueprintable)
class USwReactionState : public URsReactionState {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasTickImplemetation;
    
public:
    USwReactionState();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TickReaction(ARsCharacter* TheOneReacting, float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEndReaction(ARsCharacter* TheOneReacting);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBeginReaction(ARsCharacter* TheOneReacting);
    
};

