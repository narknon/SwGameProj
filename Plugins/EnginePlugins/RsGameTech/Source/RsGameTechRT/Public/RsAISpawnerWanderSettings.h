#pragma once
#include "CoreMinimal.h"
#include "RsAISpawnerWanderSettings.generated.h"

USTRUCT(BlueprintType)
struct RSGAMETECHRT_API FRsAISpawnerWanderSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCanWander: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUseOverrideWanderRange: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OverrideWanderRange;
    
    FRsAISpawnerWanderSettings();
};

