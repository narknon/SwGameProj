#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "ESwAbilityUpgradeLevel.h"
#include "Templates/SubclassOf.h"
#include "SwBTTask_ActivateForceAbility.generated.h"

class UAnimationAsset;
class URsAbility;

UCLASS(Blueprintable)
class SWGAME_API USwBTTask_ActivateForceAbility : public UBTTaskNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<URsAbility> AbilityTypeToActivate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ESwAbilityUpgradeLevel::Type> UpgradeLevel;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimationAsset* OverrideAnimation;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMaintainCharacterMotion;
    
public:
    USwBTTask_ActivateForceAbility();
};

