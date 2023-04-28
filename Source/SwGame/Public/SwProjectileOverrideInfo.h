#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SwProjectileOverrideInfo.generated.h"

class ASwProjectile;

USTRUCT(BlueprintType)
struct FSwProjectileOverrideInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASwProjectile> ProjectileType;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 NumShotsToMissWhenShotOffScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideOffScreenAccuracy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChanceToMissWhenShotOffScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseConsecutiveShots;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 MaxNumConsecutiveShots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChanceOfConsecutiveShot;
    
    SWGAME_API FSwProjectileOverrideInfo();
};

