#pragma once
#include "CoreMinimal.h"
#include "RsAICharacterFightBehaviors.h"
#include "RsAICharacterOverrideBehaviors.h"
#include "RsAICharacterRoleBehaviors.h"
#include "RsAIGoalBehaviorDescriptor.h"
#include "RsAICharacterBehaviors.generated.h"

USTRUCT(BlueprintType)
struct RSGAMETECHRT_API FRsAICharacterBehaviors {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsAICharacterFightBehaviors FightBehaviors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRsAIGoalBehaviorDescriptor> GoalBehaviors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsAICharacterOverrideBehaviors OverrideBehaviors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsAICharacterRoleBehaviors RoleBehaviors;
    
    FRsAICharacterBehaviors();
};

