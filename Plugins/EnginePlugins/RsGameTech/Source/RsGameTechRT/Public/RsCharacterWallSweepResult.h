#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RsCharacterWallSweepResult.generated.h"

class UPhysicalMaterial;
class UPrimitiveComponent;

USTRUCT(BlueprintType)
struct FRsCharacterWallSweepResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* HitWallComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPhysicalMaterial* HitWallMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector WallSweepHitPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector WallSweepHitNormal;
    
    RSGAMETECHRT_API FRsCharacterWallSweepResult();
};

