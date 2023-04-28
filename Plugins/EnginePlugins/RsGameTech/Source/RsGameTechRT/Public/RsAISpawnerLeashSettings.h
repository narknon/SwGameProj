#pragma once
#include "CoreMinimal.h"
#include "RsAISpawnerLeashSettings.generated.h"

USTRUCT(BlueprintType)
struct RSGAMETECHRT_API FRsAISpawnerLeashSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsLeashed: 1;
    
    FRsAISpawnerLeashSettings();
};

