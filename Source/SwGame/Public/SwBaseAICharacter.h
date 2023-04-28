#pragma once
#include "CoreMinimal.h"
#include "SwAICharacter.h"
#include "SwBaseAICharacter.generated.h"

UCLASS(Abstract, Blueprintable)
class SWGAME_API ASwBaseAICharacter : public ASwAICharacter {
    GENERATED_BODY()
public:
    ASwBaseAICharacter();
};

