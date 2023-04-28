#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "ERsAIBlendspaceInputSource.h"
#include "RsCharacterAnimationData.h"
#include "SwBTTask_PlayCombatStateAnimation.generated.h"

class URsSyncDefinition;

UCLASS(Abstract, Blueprintable)
class SWGAME_API USwBTTask_PlayCombatStateAnimation : public UBTTaskNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsCharacterAnimationData AnimData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URsSyncDefinition* SyncDef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSwapMasterAndSlaveForSync;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ERsAIBlendspaceInputSource::Type> BlendspaceInputSource;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMaintainCharacterMotion;
    
public:
    USwBTTask_PlayCombatStateAnimation();
};

