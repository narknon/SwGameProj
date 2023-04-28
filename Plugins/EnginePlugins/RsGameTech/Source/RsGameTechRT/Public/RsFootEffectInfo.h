#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "RsSurfaceEffect.h"
#include "RsFootEffectInfo.generated.h"

USTRUCT(BlueprintType)
struct RSGAMETECHRT_API FRsFootEffectInfo : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsSurfaceEffect Walk;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsSurfaceEffect Jog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsSurfaceEffect run;
    
    FRsFootEffectInfo();
};

