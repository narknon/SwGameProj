#pragma once
#include "CoreMinimal.h"
#include "RsPhysicalAnimationHeroGroundNavParameters.generated.h"

USTRUCT(BlueprintType)
struct RSGAMETECHRT_API FRsPhysicalAnimationHeroGroundNavParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlendInTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlendOutTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PhysicsBlendMultiplier;
    
    FRsPhysicalAnimationHeroGroundNavParameters();
};

