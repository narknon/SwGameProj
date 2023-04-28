#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "ERsHeroCollisionTweaks.h"
#include "ERsHeroFlagSet.h"
#include "ERsHeroMotionTweaks.h"
#include "RsHeroStateModifier_Modifications.generated.h"

class URsCameraModeDefinition;

USTRUCT(BlueprintType)
struct RSGAMETECHRT_API FRsHeroStateModifier_Modifications {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ERsHeroMotionTweaks> MotionTweaks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer AttributeTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URsCameraModeDefinition* CameraModeDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CameraModePriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraBlendInTimeOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraBlendOutTimeOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ERsHeroFlagSet> FlagSets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSetCollisionTweaks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERsHeroCollisionTweaks CollisionTweaks;
    
    FRsHeroStateModifier_Modifications();
};

