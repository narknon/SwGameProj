#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RsSurfaceEffectNiagaraUserParams.generated.h"

USTRUCT(BlueprintType)
struct RSGAMETECHRT_API FRsSurfaceEffectNiagaraUserParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, float> FloatParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FLinearColor> ColourParam;
    
    FRsSurfaceEffectNiagaraUserParams();
};

