#pragma once
#include "CoreMinimal.h"
#include "RsBitfield_HeroBufferFlags.h"
#include "RsHeroFlagSetInfoBufferFlags.generated.h"

USTRUCT(BlueprintType)
struct RSGAMETECHRT_API FRsHeroFlagSetInfoBufferFlags {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsBitfield_HeroBufferFlags SetFlags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsBitfield_HeroBufferFlags ClearFlags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsBitfield_HeroBufferFlags InvalidFlags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsBitfield_HeroBufferFlags ClearInvalidFlags;
    
    FRsHeroFlagSetInfoBufferFlags();
};

