#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=RespawnInstanceData -FallbackName=RespawnInstanceData
#include "RsAIPatrolPointInstance.generated.h"

USTRUCT(BlueprintType)
struct FRsAIPatrolPointInstance : public FRespawnInstanceData {
    GENERATED_BODY()
public:
    RSGAMETECHRT_API FRsAIPatrolPointInstance();
};

