#pragma once
#include "CoreMinimal.h"
#include "SwAICharacter.h"
#include "SwBaseChump.generated.h"

UCLASS(Abstract, Blueprintable)
class SWGAME_API ASwBaseChump : public ASwAICharacter {
    GENERATED_BODY()
public:
    ASwBaseChump();
    UFUNCTION(BlueprintCallable)
    void SetEnabled(bool bEnabled, bool bIncludComponents);
    
};

