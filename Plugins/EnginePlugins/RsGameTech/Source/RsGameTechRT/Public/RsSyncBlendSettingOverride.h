#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=MontageBlendSettings -FallbackName=MontageBlendSettings
#include "RsSyncBlendSettingOverride.generated.h"

USTRUCT(BlueprintType)
struct FRsSyncBlendSettingOverride {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMontageBlendSettings BlendInSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMontageBlendSettings BlendOutSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RefBlendInTime;
    
    RSGAMETECHRT_API FRsSyncBlendSettingOverride();
};

