#pragma once
#include "CoreMinimal.h"
#include "SwSpeederBikeSyncHeroAutopilotParameters.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct SWGAME_API FSwSpeederBikeSyncHeroAutopilotParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnableHeroAutopilot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpeederBikeSpeedWhileOnAutopilot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutopilotSpeedBlendInTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* AutopilotSpeedBlendCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutopilotLocationBlendInTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutopilotRotationBlendInTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MaintainInitialDistanceToSpline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaintainSpecificDistanceToSpline;
    
    FSwSpeederBikeSyncHeroAutopilotParameters();
};

