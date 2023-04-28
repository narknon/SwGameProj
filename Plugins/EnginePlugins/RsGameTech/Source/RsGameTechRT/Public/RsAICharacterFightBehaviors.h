#pragma once
#include "CoreMinimal.h"
#include "RsAICharacterFightBehaviors.generated.h"

class UBehaviorTree;

USTRUCT(BlueprintType)
struct RSGAMETECHRT_API FRsAICharacterFightBehaviors {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBehaviorTree* ActiveBehavior;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBehaviorTree* PassiveBehavior;
    
    FRsAICharacterFightBehaviors();
};

