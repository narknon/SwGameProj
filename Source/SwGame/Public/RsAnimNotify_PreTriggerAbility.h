#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "ESwAbilityUpgradeLevel.h"
#include "Templates/SubclassOf.h"
#include "RsAnimNotify_PreTriggerAbility.generated.h"

class UAnimationAsset;
class URsAbility;

UCLASS(Blueprintable)
class URsAnimNotify_PreTriggerAbility : public UAnimNotify {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<URsAbility> AbilityType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ESwAbilityUpgradeLevel::Type> UpgradeLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimationAsset* OverrideAnimation;
    
public:
    URsAnimNotify_PreTriggerAbility();
};

