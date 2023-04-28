#pragma once
#include "CoreMinimal.h"
#include "RsAISpawnerInstance.h"
#include "RsAIDefaultSpawnerInstance.generated.h"

USTRUCT(BlueprintType)
struct RSGAMETECHRT_API FRsAIDefaultSpawnerInstance : public FRsAISpawnerInstance {
    GENERATED_BODY()
public:
    FRsAIDefaultSpawnerInstance();
};

