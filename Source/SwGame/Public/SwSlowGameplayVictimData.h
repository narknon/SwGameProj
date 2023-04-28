#pragma once
#include "CoreMinimal.h"
#include "SwSlowGameplayVictimData.generated.h"

class UAnimationAsset;
class UCurveFloat;

USTRUCT(BlueprintType)
struct FSwSlowGameplayVictimData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimationAsset* ForceSlowStaggerAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ForceSlowDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ForceSlowTimeDilation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ForceSlowBoostedTimeDilation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanForceSlowOnTopOf;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* ForceSlowCharacterTimeDilationCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanForceSlowRotateToTarget;
    
    SWGAME_API FSwSlowGameplayVictimData();
};

