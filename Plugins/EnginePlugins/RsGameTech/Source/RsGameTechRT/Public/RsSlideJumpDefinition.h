#pragma once
#include "CoreMinimal.h"
#include "RsBasicJumpDefinition.h"
#include "RsSlideJumpDefinition.generated.h"

class URsHeroStateModifierDefinition;

UCLASS(Blueprintable)
class URsSlideJumpDefinition : public URsBasicJumpDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URsHeroStateModifierDefinition* SlideJumpModifier;
    
    URsSlideJumpDefinition();
};

