#pragma once
#include "CoreMinimal.h"
#include "RsPhysicsAssetCustomizationForRagdoll.generated.h"

USTRUCT(BlueprintType)
struct RSGAMETECHRT_API FRsPhysicsAssetCustomizationForRagdoll {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> BonesToDisablePhysicsAndCollisions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 KeepTickingPostProcessAnimInstance: 1;
    
    FRsPhysicsAssetCustomizationForRagdoll();
};

