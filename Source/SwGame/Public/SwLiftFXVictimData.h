#pragma once
#include "CoreMinimal.h"
#include "SwLiftFXVictimData.generated.h"

class UNiagaraSystem;

USTRUCT(BlueprintType)
struct FSwLiftFXVictimData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldOverrideLiftParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* LiftParticle;
    
    SWGAME_API FSwLiftFXVictimData();
};

