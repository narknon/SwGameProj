#pragma once
#include "CoreMinimal.h"
#include "RsAIPatrolPathBase.h"
#include "RsAIPatrolPointInstance.h"
#include "RsAIPatrolPath.generated.h"

UCLASS(Blueprintable)
class ARsAIPatrolPath : public ARsAIPatrolPathBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NonTransactional, meta=(AllowPrivateAccess=true))
    TArray<FRsAIPatrolPointInstance> PatrolPointInstances;
    
public:
    ARsAIPatrolPath();
};

