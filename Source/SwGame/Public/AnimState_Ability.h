#pragma once
#include "CoreMinimal.h"
#include "ESwPullAmbientRotationType.h"
#include "AnimState_Ability.generated.h"

USTRUCT(BlueprintType)
struct FAnimState_Ability {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESwPullAmbientRotationType PullAmbientRotationType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsPullAmbientRotationActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsInAnalogLift;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsInAnalogSlam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AnalogLiftSlamTargetPitch;
    
    SWGAME_API FAnimState_Ability();
};

