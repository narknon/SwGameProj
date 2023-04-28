#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "RsPhysicalAnimationParameters.h"
#include "RsPhysicalAnimationProfile.generated.h"

UCLASS(Blueprintable)
class URsPhysicalAnimationProfile : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsPhysicalAnimationParameters PhysicalAnimationParameters;
    
    URsPhysicalAnimationProfile();
};

