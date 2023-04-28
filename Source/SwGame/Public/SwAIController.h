#pragma once
#include "CoreMinimal.h"
#include "RsAIController.h"
#include "SwAIController.generated.h"

UCLASS(Abstract, Blueprintable)
class SWGAME_API ASwAIController : public ARsAIController {
    GENERATED_BODY()
public:
    ASwAIController();
    UFUNCTION(BlueprintCallable)
    void TriggerWildcardFightBonus();
    
    UFUNCTION(BlueprintCallable)
    void SetActiveFightLoopToInfinite(bool bIsInfinite);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActiveFightLoopInfinite() const;
    
};

