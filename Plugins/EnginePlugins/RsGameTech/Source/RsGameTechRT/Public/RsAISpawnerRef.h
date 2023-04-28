#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=RespawnInstanceDataBlueprintRef -FallbackName=RespawnInstanceDataBlueprintRef
#include "RsAISpawnerRef.generated.h"

USTRUCT(BlueprintType)
struct RSGAMETECHRT_API FRsAISpawnerRef : public FRespawnInstanceDataBlueprintRef {
    GENERATED_BODY()
public:
    FRsAISpawnerRef();
};

