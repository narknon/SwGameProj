#pragma once
#include "CoreMinimal.h"
#include "RsPostProcessEffectData.generated.h"

class URsPostProcessSettingsDefinition;

USTRUCT(BlueprintType)
struct RSGAMETECHRT_API FRsPostProcessEffectData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URsPostProcessSettingsDefinition* PostProcessSettingsDefinition;
    
    FRsPostProcessEffectData();
};

