#pragma once
#include "CoreMinimal.h"
#include "RsAICharacterRoleBehaviors.generated.h"

class UBehaviorTree;

USTRUCT(BlueprintType)
struct RSGAMETECHRT_API FRsAICharacterRoleBehaviors {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBehaviorTree* GuardBehavior;
    
    FRsAICharacterRoleBehaviors();
};

