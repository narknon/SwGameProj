#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "SwAnimNotify_HeroFindNewSoftLockTarget.generated.h"

class USwTargetingProfile;

UCLASS(Blueprintable, CollapseCategories)
class SWGAME_API USwAnimNotify_HeroFindNewSoftLockTarget : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USwTargetingProfile* TargetingProfile;
    
    USwAnimNotify_HeroFindNewSoftLockTarget();
};

