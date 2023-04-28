#pragma once
#include "CoreMinimal.h"
#include "SwSlamFXVictimData.generated.h"

class UNiagaraSystem;

USTRUCT(BlueprintType)
struct FSwSlamFXVictimData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldOverrideHitGroundParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* HitGroundParticle;
    
    SWGAME_API FSwSlamFXVictimData();
};

