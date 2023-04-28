#pragma once
#include "CoreMinimal.h"
#include "RsAICharacterOverrideBehaviors.generated.h"

class UBehaviorTree;

USTRUCT(BlueprintType)
struct RSGAMETECHRT_API FRsAICharacterOverrideBehaviors {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBehaviorTree* RootBehavior;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBehaviorTree* FightIdleBehavior;
    
    FRsAICharacterOverrideBehaviors();
};

