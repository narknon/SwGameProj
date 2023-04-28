#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ExplosionEmitterSpawnableData.h"
#include "RsCameraShake.h"
#include "RsImpactEffectSurface.generated.h"

class UAkAudioEvent;
class UDataTable;

USTRUCT(BlueprintType)
struct RSGAMETECHRT_API FRsImpactEffectSurface : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool LightSaberImpact;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ImpactSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* SurfaceEffectTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsCameraShake CameraShake;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ForceFeedbackIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ForceFeedbackDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UsesExplosionSpawnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FExplosionEmitterSpawnableData ExplosionEmitterData;
    
    FRsImpactEffectSurface();
};

