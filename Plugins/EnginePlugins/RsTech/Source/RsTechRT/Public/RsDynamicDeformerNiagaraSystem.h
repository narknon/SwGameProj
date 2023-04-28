#pragma once
#include "CoreMinimal.h"
#include "RsDynamicDeformerBase.h"
#include "RsDynamicDeformerNiagaraSystem.generated.h"

class UNiagaraComponent;

UCLASS(Blueprintable)
class ARsDynamicDeformerNiagaraSystem : public ARsDynamicDeformerBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* ParticleSystem;
    
    ARsDynamicDeformerNiagaraSystem();
    UFUNCTION(BlueprintCallable)
    void OnParticleSystemFinished(UNiagaraComponent* FinishedComponent);
    
};

