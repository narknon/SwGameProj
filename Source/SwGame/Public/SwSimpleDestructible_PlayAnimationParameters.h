#pragma once
#include "CoreMinimal.h"
#include "ESwDestructibleActorDamageSourceType.h"
#include "SwSimpleDestructible_PlayAnimationParameters.generated.h"

class UAnimationAsset;

USTRUCT(BlueprintType)
struct SWGAME_API FSwSimpleDestructible_PlayAnimationParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Activate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SkeletalMeshComponentName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESwDestructibleActorDamageSourceType PlayOnlyForSpecificDamageSourceType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimationAsset* AnimationToPlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool StartPhysicsOnThisComponentAtTheEndOfAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AllowFastRateReplayDuringLoadingSavedGame;
    
    FSwSimpleDestructible_PlayAnimationParameters();
};

