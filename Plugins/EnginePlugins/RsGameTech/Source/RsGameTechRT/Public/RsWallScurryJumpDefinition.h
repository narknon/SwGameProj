#pragma once
#include "CoreMinimal.h"
#include "RsBasicJumpDefinition.h"
#include "RsWallScurryJumpDefinition.generated.h"

class URsHeroStateModifierDefinition;

UCLASS(Blueprintable)
class URsWallScurryJumpDefinition : public URsBasicJumpDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URsHeroStateModifierDefinition* WallScurryJumpModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URsHeroStateModifierDefinition* WallScurryJumpChimneyCameraModifier;
    
    URsWallScurryJumpDefinition();
};

