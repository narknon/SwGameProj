#pragma once
#include "CoreMinimal.h"
#include "RsCharacterAnimationData.h"
#include "SwSlamStaggerCharacterData.generated.h"

class URsDamageType;

USTRUCT(BlueprintType)
struct FSwSlamStaggerCharacterData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URsDamageType* SlamDamageTypeAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldPutInCombatState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsCharacterAnimationData StaggerAnimation;
    
    SWGAME_API FSwSlamStaggerCharacterData();
};

