#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=RespawnInstanceDataBlueprintRef -FallbackName=RespawnInstanceDataBlueprintRef
#include "RsAIPatrolPointRef.generated.h"

USTRUCT(BlueprintType)
struct RSGAMETECHRT_API FRsAIPatrolPointRef : public FRespawnInstanceDataBlueprintRef {
    GENERATED_BODY()
public:
    FRsAIPatrolPointRef();
};

