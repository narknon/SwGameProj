#pragma once
#include "CoreMinimal.h"
#include "SwVictimDataOverride.h"
#include "SwCollisionDamageVictimDataOverride.generated.h"

class USwCollisionDamageData;

USTRUCT(BlueprintType)
struct FSwCollisionDamageVictimDataOverride : public FSwVictimDataOverride {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldOverrideCollisionDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USwCollisionDamageData* CollisionDamageData;
    
    SWGAME_API FSwCollisionDamageVictimDataOverride();
};

