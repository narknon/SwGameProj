#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "SwBTTask_BuddyAttachToHeroAndWait.generated.h"

UCLASS(Blueprintable)
class USwBTTask_BuddyAttachToHeroAndWait : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WaitTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInfiniteWaitTime;
    
    USwBTTask_BuddyAttachToHeroAndWait();
};

