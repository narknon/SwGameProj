#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "ERsCombatState.h"
#include "RsAITargetEvaluator.h"
#include "RsAITargetEvaluatorWeights_Default.h"
#include "RsAITargetEvaluator_Default.generated.h"

class AActor;

UCLASS(Blueprintable)
class URsAITargetEvaluator_Default : public URsAITargetEvaluator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsAITargetEvaluatorWeights_Default TargetScoringWeights;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InnerTargetingDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OuterTargetingDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ExcludeTargetsInSyncAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ExcludeTargetsInSyncAnimWithPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ExcludeTargetsZTargeted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TEnumAsByte<ERsCombatState::Type>> ExcludeTargetsInTheseCombatStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagQuery ExcludeTargetsMatchingThisGameplayTagQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName IsControlledByPlayerAndNonTargetableByAIBBVarName;
    
    URsAITargetEvaluator_Default();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShouldExcludeTarget(AActor* Target, bool& bShouldExclude) const;
    
};

