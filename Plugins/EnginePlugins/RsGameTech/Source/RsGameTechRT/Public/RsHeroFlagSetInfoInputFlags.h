#pragma once
#include "CoreMinimal.h"
#include "RsBitfield_HeroInputFlags.h"
#include "RsHeroFlagSetInfoInputFlags.generated.h"

USTRUCT(BlueprintType)
struct RSGAMETECHRT_API FRsHeroFlagSetInfoInputFlags {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsBitfield_HeroInputFlags SetFlags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsBitfield_HeroInputFlags ClearFlags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsBitfield_HeroInputFlags InvalidFlags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsBitfield_HeroInputFlags ClearInvalidFlags;
    
    FRsHeroFlagSetInfoInputFlags();
};

