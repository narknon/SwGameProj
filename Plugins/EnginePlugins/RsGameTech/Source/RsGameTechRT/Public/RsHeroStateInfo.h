#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "ERsHeroCollisionTweaks.h"
#include "ERsHeroFlagSet.h"
#include "ERsHeroMotionTweaks.h"
#include "ERsNavState.h"
#include "RsHeroStateInfo.generated.h"

class URsCameraModeDefinition;
class URsCharacterReactionDefinition;

USTRUCT(BlueprintType)
struct RSGAMETECHRT_API FRsHeroStateInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERsNavState State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag StateTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ERsHeroMotionTweaks> MotionTweaks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERsHeroCollisionTweaks CollisionTweaks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URsCameraModeDefinition* CameraModeDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ERsHeroFlagSet> FlagSets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URsCharacterReactionDefinition* ReactionDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EMovementMode> MovementMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer AttributeTags;
    
    FRsHeroStateInfo();
};

