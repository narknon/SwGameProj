#pragma once
#include "CoreMinimal.h"
#include "ERsHeroFlagSet.h"
#include "RsHeroFlagSetInfoBufferFlags.h"
#include "RsHeroFlagSetInfoInputFlags.h"
#include "RsHeroFlagSetInfo.generated.h"

USTRUCT(BlueprintType)
struct RSGAMETECHRT_API FRsHeroFlagSetInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERsHeroFlagSet FlagSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsHeroFlagSetInfoInputFlags InputFlags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsHeroFlagSetInfoBufferFlags BufferFlags;
    
    FRsHeroFlagSetInfo();
};

