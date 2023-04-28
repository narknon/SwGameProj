#pragma once
#include "CoreMinimal.h"
#include "RsAbilityEffect.h"
#include "Templates/SubclassOf.h"
#include "SwForceLiftAbilityEffect.generated.h"

class ARsDynamicDeformerBase;

UCLASS(Blueprintable)
class SWGAME_API USwForceLiftAbilityEffect : public URsAbilityEffect {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AuxiliaryRadius;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ARsDynamicDeformerBase> LiftDynamicDeformationClass;
    
    USwForceLiftAbilityEffect();
};

