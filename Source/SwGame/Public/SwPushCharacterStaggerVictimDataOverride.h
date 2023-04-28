#pragma once
#include "CoreMinimal.h"
#include "RsCharacterAnimationData.h"
#include "ESwOverrideBooleanType.h"
#include "SwPushCharacterStaggerVictimDataOverride.generated.h"

USTRUCT(BlueprintType)
struct FSwPushCharacterStaggerVictimDataOverride {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESwOverrideBooleanType ShouldForcePushStaggerPutInCombatState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESwOverrideBooleanType ShouldForcePushHaveBackStagger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldOverrideStaggerAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldOverrideBackStaggerAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsCharacterAnimationData ForcePushStagger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsCharacterAnimationData ForcePushBackStagger;
    
    SWGAME_API FSwPushCharacterStaggerVictimDataOverride();
};

