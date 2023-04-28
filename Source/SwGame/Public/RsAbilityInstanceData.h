#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "RsAbilityInstanceData.generated.h"

class UAnimationAsset;
class URsCameraModeDefinition;
class URsHeroStateModifierDefinition;

UCLASS(Blueprintable)
class URsAbilityInstanceData : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    URsCameraModeDefinition* CameraModeDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    URsHeroStateModifierDefinition* HeroStateModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimationAsset* CurrentAnimation;
    
public:
    URsAbilityInstanceData();
};

