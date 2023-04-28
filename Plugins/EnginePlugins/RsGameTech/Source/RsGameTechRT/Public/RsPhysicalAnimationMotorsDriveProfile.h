#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "RsPhysicalAnimationMotorsDriveParameters.h"
#include "RsPhysicalAnimationMotorsDriveProfile.generated.h"

UCLASS(Blueprintable)
class URsPhysicalAnimationMotorsDriveProfile : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsPhysicalAnimationMotorsDriveParameters MotorsDriveParameters;
    
    URsPhysicalAnimationMotorsDriveProfile();
};

