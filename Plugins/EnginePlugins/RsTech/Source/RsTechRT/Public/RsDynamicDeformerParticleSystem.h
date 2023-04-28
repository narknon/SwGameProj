#pragma once
#include "CoreMinimal.h"
#include "RsDynamicDeformerBase.h"
#include "RsDynamicDeformerParticleSystem.generated.h"

class UParticleSystemComponent;

UCLASS(Blueprintable)
class ARsDynamicDeformerParticleSystem : public ARsDynamicDeformerBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* ParticleSystem;
    
    ARsDynamicDeformerParticleSystem();
    UFUNCTION(BlueprintCallable)
    void OnParticleSystemFinished(UParticleSystemComponent* FinishedComponent);
    
};

