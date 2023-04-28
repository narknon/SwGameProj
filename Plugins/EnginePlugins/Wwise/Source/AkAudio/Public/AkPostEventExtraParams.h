#pragma once
#include "CoreMinimal.h"
#include "AkPostEventExtraParams.generated.h"

USTRUCT(BlueprintType)
struct AKAUDIO_API FAkPostEventExtraParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AttenuationScalingFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OcclusionRefreshInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseReverbVolumes;
    
    FAkPostEventExtraParams();
};

