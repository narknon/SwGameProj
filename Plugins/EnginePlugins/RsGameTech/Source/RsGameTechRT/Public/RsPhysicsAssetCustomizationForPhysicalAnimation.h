#pragma once
#include "CoreMinimal.h"
#include "RsPhysicsAssetCustomizationForPhysicalAnimation_Collision.h"
#include "RsPhysicsAssetCustomizationForPhysicalAnimation.generated.h"

USTRUCT(BlueprintType)
struct RSGAMETECHRT_API FRsPhysicsAssetCustomizationForPhysicalAnimation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRsPhysicsAssetCustomizationForPhysicalAnimation_Collision> BodiesCollision;
    
    FRsPhysicsAssetCustomizationForPhysicalAnimation();
};

