#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "RsAIGoalManager.generated.h"

class URsAIGoal;

UCLASS(Blueprintable)
class URsAIGoalManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<URsAIGoal*> LatentGoals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<URsAIGoal*> PostedGoals;
    
public:
    URsAIGoalManager();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<URsAIGoal*> GetPostedGoals() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<URsAIGoal*> GetLatentGoals() const;
    
};

