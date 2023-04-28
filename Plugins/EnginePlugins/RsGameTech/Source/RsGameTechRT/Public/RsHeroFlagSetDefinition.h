#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "RsBitfield_HeroInputFlags.h"
#include "RsHeroFlagSetInfo.h"
#include "RsHeroFlagSetDefinition.generated.h"

UCLASS(Blueprintable)
class URsHeroFlagSetDefinition : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsBitfield_HeroInputFlags DefaultSetFlags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsBitfield_HeroInputFlags DefaultInvalidFlags;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FRsHeroFlagSetInfo> Sets;
    
public:
    URsHeroFlagSetDefinition();
};

