#pragma once
#include "CoreMinimal.h"
#include "RsAbilityEffect.h"
#include "Templates/SubclassOf.h"
#include "SwForceSlamAbilityEffect.generated.h"

class ARsDynamicDeformerBase;

UCLASS(Blueprintable)
class USwForceSlamAbilityEffect : public URsAbilityEffect {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AuxiliaryRadius;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ARsDynamicDeformerBase> SlamDynamicDeformationClass;
    
    USwForceSlamAbilityEffect();
};

