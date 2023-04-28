#pragma once
#include "CoreMinimal.h"
#include "Engine/StaticMeshActor.h"
#include "SwTKProjectileBase.generated.h"

class URsAbilityEffectVictimComponent;

UCLASS(Abstract, Blueprintable)
class ASwTKProjectileBase : public AStaticMeshActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URsAbilityEffectVictimComponent* AbilityEffectVictim;
    
public:
    ASwTKProjectileBase();
};

