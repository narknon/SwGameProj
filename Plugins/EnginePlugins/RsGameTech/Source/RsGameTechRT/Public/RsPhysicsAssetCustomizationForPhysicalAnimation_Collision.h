#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RsPhysicsAssetCustomizationForPhysicalAnimation_Collision.generated.h"

USTRUCT(BlueprintType)
struct RSGAMETECHRT_API FRsPhysicsAssetCustomizationForPhysicalAnimation_Collision {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Scale;
    
    FRsPhysicsAssetCustomizationForPhysicalAnimation_Collision();
};

