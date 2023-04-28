#pragma once
#include "CoreMinimal.h"
#include "SwBTTask_PlayCombatStateAnimation.h"
#include "SwBTTask_PlayAttackAnimation.generated.h"

class USwAttackState;

UCLASS(Blueprintable)
class SWGAME_API USwBTTask_PlayAttackAnimation : public USwBTTask_PlayCombatStateAnimation {
    GENERATED_BODY()
public:
private:
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USwAttackState* AttackTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNeedsTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRequiresLOS;
    
public:
    USwBTTask_PlayAttackAnimation();
};

