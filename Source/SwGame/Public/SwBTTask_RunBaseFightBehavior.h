#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_RunBehaviorDynamic.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "SwBTTask_RunBaseFightBehavior.generated.h"

UCLASS(Blueprintable)
class SWGAME_API USwBTTask_RunBaseFightBehavior : public UBTTask_RunBehaviorDynamic {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector NewTargetSourceKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bSetBlackboardKeyValueToNewTarget: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector NewTargetDestinationKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverrideCharacterControllerAttackTarget: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverrideCharacterControllerFocusTarget: 1;
    
public:
    USwBTTask_RunBaseFightBehavior();
};

