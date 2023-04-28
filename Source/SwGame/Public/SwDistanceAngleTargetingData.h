#pragma once
#include "CoreMinimal.h"
#include "ESwDistanceAngleTargetingMode.h"
#include "SwTargetingProfileData.h"
#include "SwDistanceAngleTargetingData.generated.h"

USTRUCT(BlueprintType)
struct FSwDistanceAngleTargetingData : public FSwTargetingProfileData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxHorizontalHalfAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxVerticalHalfAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ProximityWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESwDistanceAngleTargetingMode TargetingMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideVerticalHalfAngleWithCameraFOV;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableVerticalAngleTest;
    
    SWGAME_API FSwDistanceAngleTargetingData();
};

