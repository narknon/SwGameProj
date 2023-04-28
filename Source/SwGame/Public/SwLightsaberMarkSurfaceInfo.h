#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "SwLightsaberMarkSurfaceInfo.generated.h"

class UMaterialInterface;
class UParticleSystem;

USTRUCT(BlueprintType)
struct SWGAME_API FSwLightsaberMarkSurfaceInfo : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInterface> DecalMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UParticleSystem> ParticleEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ParticleOffsetAlongNormal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlayAudio;
    
    FSwLightsaberMarkSurfaceInfo();
};

