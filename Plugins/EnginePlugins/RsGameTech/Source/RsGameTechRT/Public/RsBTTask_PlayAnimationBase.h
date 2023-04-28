#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "ERsAIBlendspaceInputSource.h"
#include "ERsCombatState.h"
#include "RsBTTask_PlayAnimationBase.generated.h"

class ARsCharacter;

UCLASS(Blueprintable)
class URsBTTask_PlayAnimationBase : public UBTTaskNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ERsAIBlendspaceInputSource::Type> BlendspaceInputSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector BlendSpaceInputBlackboardKey;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLockCurrentGoal;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLockCurrentTarget;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMaintainCharacterMotion;
    
public:
    URsBTTask_PlayAnimationBase();
protected:
    UFUNCTION(BlueprintCallable)
    void OnCombatStateChange(ARsCharacter* Character, TEnumAsByte<ERsCombatState::Type> PreviousCombatState, TEnumAsByte<ERsCombatState::Type> NewCombatState);
    
};

