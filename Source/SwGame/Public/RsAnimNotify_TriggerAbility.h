#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "ESwAbilityUpgradeLevel.h"
#include "Templates/SubclassOf.h"
#include "RsAnimNotify_TriggerAbility.generated.h"

class URsAbility;

UCLASS(Blueprintable)
class URsAnimNotify_TriggerAbility : public UAnimNotify {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<URsAbility> AbilityType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldUseHighestAcquiredUpgrade;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanReTrigger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ESwAbilityUpgradeLevel::Type> UpgradeLevel;
    
public:
    URsAnimNotify_TriggerAbility();
};

