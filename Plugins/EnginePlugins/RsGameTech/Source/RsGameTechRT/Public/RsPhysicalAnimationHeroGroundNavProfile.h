#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "RsPhysicalAnimationHeroGroundNavParameters.h"
#include "RsPhysicalAnimationHeroGroundNavProfile.generated.h"

UCLASS(Blueprintable)
class URsPhysicalAnimationHeroGroundNavProfile : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDoNotActivateWhenPlayingAsCere;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsPhysicalAnimationHeroGroundNavParameters HeroTurning;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinimumSpeedToAllowTurningProfile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsPhysicalAnimationHeroGroundNavParameters HeroStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsPhysicalAnimationHeroGroundNavParameters HeroStop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinimumTimeInMotionToTriggerStopProfile;
    
    URsPhysicalAnimationHeroGroundNavProfile();
};

